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


%%
% Your input string (replace with your actual string)
input_string = '1010101010101010';

% Convert each character to a numeric value ('0' -> 0, '1' -> 1)
numeric_values = double(input_string) - 48;

% Reshape the numeric values into a 1x16 matrix
numeric_matrix = reshape(numeric_values, 1, 16);
