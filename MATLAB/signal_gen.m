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


%%
% Generate the square wave
my_sq = square(2*pi*f*t);
my_sq = my_sq * 127;

% Quantize to 8-bit fixed-point representation
my_sq_quantized = fi(my_sq, true, 8, 0);  % 8-bit signed fixed-point (7 fractional bits)

% Plot the quantized square wave
plot(t, my_sq_quantized)
xlabel('Time (s)')
ylabel('Amplitude')
title('Quantized Square Wave')


%%
% Generate the sawtooth wave
my_sawtooth = sawtooth(2*pi*f*t);
my_sawtooth = my_sawtooth * 127;

% Quantize to 8-bit fixed-point representation
my_sawtooth_quantized = fi(my_sawtooth, true, 8, 0);  % 8-bit signed fixed-point (7 fractional bits)

% Plot the quantized sawtooth wave
plot(t, my_sawtooth_quantized)
xlabel('Time (s)')
ylabel('Amplitude')
title('Quantized Sawtooth Wave')

%%
% Generate the triangle wave
my_triangle = sawtooth(2*pi*f*t, 0.5);  % Set xmax to 0.5 for a standard triangle wave
my_triangle = my_triangle *127;

% Quantize to 8-bit fixed-point representation
my_triangle_quantized = fi(my_triangle, true, 8, 0);  % 8-bit signed fixed-point (7 fractional bits)

% Plot the quantized triangle wave
plot(t, my_triangle_quantized)
xlabel('Time (s)')
ylabel('Amplitude')
title('Quantized Triangle Wave')

%%
% Create data for each waveform (replace with your actual quantized data)
my_sin_data = my_sin_quantized.data;
my_sq_data = my_sq_quantized.data;
my_sawtooth_data = my_sawtooth_quantized.data;
my_triangle_data = my_triangle_quantized.data;

% Define file names
sin_file = 'my_sin.mem';
sq_file = 'my_sq.mem';
sawtooth_file = 'my_sawtooth.mem';
triangle_file = 'my_triangle.mem';

% Write data to .mem files
write_mem_file(sin_file, my_sin_data);
write_mem_file(sq_file, my_sq_data);
write_mem_file(sawtooth_file, my_sawtooth_data);
write_mem_file(triangle_file, my_triangle_data);

%%

% Your existing code...
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

% The last 8 columns of extended_matrix are already zeros

%%

% Initialize an empty 1024x8 matrix
my_sawtooth_matrix = zeros(length(my_sawtooth_data), 8);

% Fill the matrix with binary values
for i = 1:length(my_sawtooth_data)
    % Convert each value to a binary string
    bin_str = dec2bin(my_sawtooth_data(i), 8);
    
    % Convert the binary string to a row vector of numbers
    row_vec = double(bin_str) - '0';  % Subtract '0' to convert char to double
    
    % Store the row vector in the matrix
    my_sawtooth_matrix(i, :) = row_vec;
end

% Get the size of the original matrix
[num_rows, num_cols] = size(my_sawtooth_matrix);

% Create a new matrix with 8 additional columns
extended_sawtooth_matrix = zeros(num_rows, num_cols + 8);

% Copy the original data into the new matrix
extended_sawtooth_matrix(:, 1:num_cols) = my_matrix;

% The last 8 columns of extended_matrix are already zeros

%%

% Initialize an empty 1024x8 matrix
my_triangle_matrix = zeros(length(my_triangle_data), 8);

% Fill the matrix with binary values
for i = 1:length(my_triangle_data)
    % Convert each value to a binary string
    bin_str = dec2bin(my_triangle_data(i), 8);
    
    % Convert the binary string to a row vector of numbers
    row_vec = double(bin_str) - '0';  % Subtract '0' to convert char to double
    
    % Store the row vector in the matrix
    my_triangle_matrix(i, :) = row_vec;
end

% Get the size of the original matrix
[num_rows, num_cols] = size(my_triangle_matrix);

% Create a new matrix with 8 additional columns
extended_triangle_matrix = zeros(num_rows, num_cols + 8);

% Copy the original data into the new matrix
extended_triangle_matrix(:, 1:num_cols) = my_matrix;

% The last 8 columns of extended_matrix are already zeros

%%

% Initialize an empty 1024x8 matrix
my_sq_matrix = zeros(length(my_sq_data), 8);

% Fill the matrix with binary values
for i = 1:length(my_sq_data)
    % Convert each value to a binary string
    bin_str = dec2bin(my_sq_data(i), 8);
    
    % Convert the binary string to a row vector of numbers
    row_vec = double(bin_str) - '0';  % Subtract '0' to convert char to double
    
    % Store the row vector in the matrix
    my_sq_matrix(i, :) = row_vec;
end

% Get the size of the original matrix
[num_rows, num_cols] = size(my_sq_matrix);

% Create a new matrix with 8 additional columns
extended_sq_matrix = zeros(num_rows, num_cols + 8);

% Copy the original data into the new matrix
extended_sq_matrix(:, 1:num_cols) = my_matrix;

% The last 8 columns of extended_matrix are already zeros



%%

function write_mem_file(filename, data)
    % Write data to a .mem file in 8-bit binary format
    fid = fopen(filename, 'w');
    for i = 1:length(data)
        fprintf(fid, '%08s\n', dec2bin(data(i), 8));
    end
    fclose(fid);
end
