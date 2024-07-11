# Dodge the Box

Dodge the Box is an exciting game developed entirely in C++ using the Chili DirectX Framework. The objective of the game is to dodge randomly spawning boxes while shooting at them to destroy them. The boxes move around the screen and the game ends when a box hits the player.

## Table of Contents

- [Dodge the Box](#dodge-the-box)
- [Table of Contents](#table-of-contents)
- [Game Mechanics](#game-mechanics)
- [Installation](#installation)
- [Usage](#usage)
- [Controls](#controls)
- [Code Structure](#code-structure)
- [Acknowledgements](#acknowledgements)
- [License](#license)

## Game Mechanics

- **Objective**: Dodge the boxes and shoot them to stay alive as long as possible.
- **Player**: Move around the screen to dodge the boxes.
- **Boxes**: Spawn randomly and bounce around the screen. If they hit the player, the game ends.
- **Shooting**: The player can shoot bullets to destroy the boxes.

## Installation

1. **Clone the repository**:

    ```sh
    git clone https://github.com/yourusername/Dodge_the_Box.git
    cd Dodge_the_Box
    ```

2. **Set up the development environment**:

    Make sure you have a C++ compiler and the Chili DirectX Framework set up on your machine.

## Usage

1. **Compile the game**:

    Open the project in your preferred C++ development environment and compile it.

2. **Run the game**:

    Execute the compiled binary to start playing Dodge the Box.

## Controls

- **Arrow Keys**: Move the player character.
- **Spacebar**: Shoot bullets to destroy boxes.

## Code Structure

The game is structured into several C++ files:

- **Box.cpp & Box.h**: Define the behavior and properties of the boxes.
- **Bullet.cpp & Bullet.h**: Define the behavior and properties of the bullets.
- **Cross.cpp & Cross.h**: Define the player character and its interactions.
- **Game.cpp & Game.h**: Handle the game logic, including updates and rendering.

## Acknowledgements

This game was developed using the [Chili DirectX Framework](http://www.planetchili.net). Special thanks to the community for their tutorials and support.

## License

This project is licensed under the GNU General Public License. See the [LICENSE](LICENSE) file for details.

---

Enjoy playing Dodge the Box! Feel free to contribute or open issues on the [GitHub repository](https://github.com/yourusername/Dodge_the_Box).
