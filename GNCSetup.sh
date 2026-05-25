## Shell Script to install dependencies for my GNC Project
# Install Homebrew if not already installed
if ! command -v brew &> /dev/null
then
    echo "Homebrew not found. Installing Homebrew..."
    /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
    echo >> /Users/hari/.zprofile
    echo 'eval "$(/opt/homebrew/bin/brew shellenv zsh)"' >> /Users/hari/.zprofile
    eval "$(/opt/homebrew/bin/brew shellenv zsh)"
else
    echo "Homebrew is already installed."
fi

