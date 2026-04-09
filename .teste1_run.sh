
            #!/bin/bash
            clear  # Clear the terminal screen at the start
            cd "c:\Users\Alex\Desktop\C++"
            if [ -f teste1 ]; then
                rm teste1  # Remove the old binary if it exists
            fi
            g++ -o teste1 teste1.cpp
            if [ $? -eq 0 ]; then
                ./teste1
            else
                echo "Compilation failed."
            fi
            echo ""  # Add a newline for better separation
            rm "c:\Users\Alex\Desktop\C++\.teste1_run.sh"
        