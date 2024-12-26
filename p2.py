def simulate_automaton(input_str):
    transitions = {
        1: {'a': 2, 'b': 3},
        2: {'a': 1, 'b': 4},
        3: {'a': 4, 'b': 1},
        4: {'a': 3, 'b': 2}
    }

    current_state = 1

    for c in input_str:
        if c not in transitions[current_state]:
            return False
        current_state = transitions[current_state][c]

    return current_state == 2

def main():
    input_str = input("Enter the input string: ")

    if simulate_automaton(input_str):
        print("Input string is accepted.")
    else:
        print("Input string is rejected.")

if __name__ == "__main__":
    main()