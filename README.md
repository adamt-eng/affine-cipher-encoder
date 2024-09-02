# Affine Cipher Encoder

This project implements an Affine Cipher encoder for the Italian alphabet, which includes 22 letters and the space character. The program allows the user to input a plaintext message and cipher keys to generate a ciphered text using the Affine Cipher algorithm.

## Features

- **Custom Alphabet**: The cipher is based on the Italian alphabet with a space character, making it unique and tailored for specific use cases.
- **Interactive Console Application**: The program runs in the console and interacts with the user, accepting input for cipher keys and text to encode.
- **Affine Cipher Algorithm**: Implements the Affine Cipher formula `E(x) = (a * x + b) mod m`, where:
  - `x` is the numerical value of a character.
  - `a` and `b` are user-defined keys.
  - `m` is the size of the alphabet (23 in this case).

## Installation

### Installation Using [Visual Studio](https://visualstudio.microsoft.com/downloads/)

1. **Clone the Repository**

   Clone the repository to your local machine using the following command:

   ```bash
   git clone https://github.com/adamt-eng/affine-cipher-encoder
   ```

2. **Open the Project**

   - Navigate to the directory where the repository was cloned.
   - Open the `Affine Cipher Encoder.sln` solution file in Visual Studio.

3. **Build the Project**

   - Once the project is opened in Visual Studio, build the solution by selecting `Build > Build Solution` from the menu or pressing `Ctrl + Shift + B`.

4. **Run the Program**

   - After building the solution, you can run the program by pressing `F5` or selecting `Debug > Start Debugging`.

### Alternative Compilation

If you prefer not to use Visual Studio, you can directly compile the `Program.cpp` file using a standard C++ compiler of your choice.

### Additional Notes

- If there are any missing dependencies or libraries, Visual Studio will prompt you to install them automatically.
- Ensure that your system has the necessary C++ development tools and libraries installed through Visual Studio's installer or your preferred development environment.

## Usage

1. When you run the program, it will display the alphabet used for ciphering.
2. You will be prompted to enter two cipher keys, \(a\) and \(b\). Make sure that \(a\) is coprime with the alphabet size (23) to ensure a valid cipher.
3. Input the text you wish to cipher.
4. The program will display the ciphered text.
5. You can choose to either exit the program or try again with different inputs.

### Example

```plaintext
Ciphering Alphabet: " ABCDEFGHILMNOPQRSTUVZ" (Italian alphabet including the space character)

Please enter your ciphering keys:
A: 5
B: 8

Enter the text you'd like to cipher: HELLO

Ciphered Text (Inside Quotations): "DMPPG"

[1] Exit
[2] Try Again
```
