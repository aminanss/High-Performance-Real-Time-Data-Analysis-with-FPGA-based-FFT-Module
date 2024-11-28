%% Code to generate sinousoide inside MATLAB
N = 1024;          % Number of samples
fs = 256;          % Sampling frequency (Hz)
f = 1;             % Frequency of the sine wave (Hz)
ts = 1/fs;         % Time step
t = ts * (0:N-1);  % Time vector

% Generate the sine wave
my_sin = sin(2*pi*f*t);
my_sin = my_sin * 127;

% Quantize to 8-bit fixed-point representation
my_sin_quantized = fi(my_sin, true, 8, 0);  % 8-bit signed fixed-point (7 fractional bits)

% Plot the quantized sine wave
plot(t, my_sin_quantized)
xlabel('Time (s)')
ylabel('Amplitude')
title('Quantized Sine Wave')

% Create data for each waveform (replace with your actual quantized data)
my_sin_data = my_sin_quantized.data;

% Initialize an empty 1024x8 matrix
my_sin_matrix = zeros(length(my_sin_data), 8);

% Fill the matrix with binary values
for i = 1:length(my_sin_data)
    % Convert each value to a binary string
    bin_str = dec2bin(my_sin_data(i), 8);
    
    % Convert the binary string to a row vector of numbers
    row_vec = double(bin_str) - '0';  % Subtract '0' to convert char to double
    
    % Store the row vector in the matrix
    my_sin_matrix(i, :) = row_vec;
end

% Get the size of the original matrix
[num_rows, num_cols] = size(my_sin_matrix);

% Create a new matrix with 8 additional columns
extended_sin_matrix = zeros(num_rows, num_cols + 8);

% Copy the original data into the new matrix
extended_sin_matrix(:, 1:num_cols) = my_sin_matrix;
data_matrix_sin = extended_sin_matrix;

%% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Code to read 16 bit data from file:

% Read the file
fid = fopen('data.txt', 'r');
data_matrix = []; % Initialize the matrix

% Loop through each line
for row = 1:1024
    line = fgetl(fid); % Read the line as a string
    % Convert each character to a numeric value ('0' -> 0, '1' -> 1)
    numeric_values = double(line) - 48;
    
    % Reshape the numeric values into a 1x16 matrix
    numeric_matrix = reshape(numeric_values, 1, 16);
    data_matrix = [data_matrix; numeric_matrix];
end

fclose(fid); % Close the file

%% Adding header

% Split into two 512-row matrices
half_size = size(data_matrix, 1) / 2;
matrix1 = data_matrix(1:half_size, :);
matrix2 = data_matrix(half_size+1:end, :);

% Add 3 rows of all 1s to each matrix
ones_rows = ones(3, 16);
matrix1 = [ones_rows; matrix1];
matrix2 = [ones_rows; matrix2];

% Merge the two data matrices
final_data_matrix = [matrix1; matrix2];

%% detecting header


% Initialize state machine (same as before)
currentState = 'State1';
detected_rows = []; % Initialize an empty array for detected row numbers

% Iterate through rows
for row = 1:size(final_data_matrix, 1)
    rowData = final_data_matrix(row, :);
    
    switch currentState
        case 'State1'
            if all(rowData == 1)
                currentState = 'State2';
            end
        case 'State2'
            if all(rowData == 1)
                currentState = 'State3';
            else
                currentState = 'State1'; % Reset
            end
        case 'State3'
            if all(rowData == 1)
                detected_rows = [detected_rows, row]; % Store detected row number
                currentState = 'State1'; % Reset
            else
                currentState = 'State1'; % Reset
            end
    end
end

% Remove the detected rows
detected_data_matrix = final_data_matrix;

% Remove three rows for each detected row
for i = 1:length(detected_rows)
    detected_row = detected_rows(i);
    detected_data_matrix(detected_row-2:detected_row, :) = [];
end

%% Writing the data with header into a file
% Create a file named 'final_data.mem' and open it for writing
fileID = fopen('final_data.txt', 'w');

% Write each row of the matrix to the file
for row = 1:size(final_data_matrix, 1)
    fprintf(fileID, '%s\n', num2str(final_data_matrix(row, :), '%d'));
end

% Close the file
fclose(fileID);

disp('Matrix written to final_data_with_header.txt');

%% Writing the data after header detection into a file
% Create a file named 'final_data.mem' and open it for writing
fileID = fopen('data.txt', 'w');

% Write each row of the matrix to the file
for row = 1:size(detected_data_matrix, 1)
    fprintf(fileID, '%s\n', num2str(detected_data_matrix(row, :), '%d'));
end

% Close the file
fclose(fileID);

disp('Matrix written to final_data_after_detection.txt');