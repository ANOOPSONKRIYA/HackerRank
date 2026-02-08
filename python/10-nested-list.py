if __name__ == '__main__':
    records = []

    for _ in range(int(input())):
        name = input().strip()
        score = float(input().strip())
        records.append([name, score])

    # Step 1: get all unique scores
    scores = sorted(set(score for name, score in records))

    # Step 2: second lowest score
    second_lowest = scores[1]

    # Step 3: collect names with that score
    result = [name for name, score in records if score == second_lowest]

    # Step 4: print names alphabetically
    for name in sorted(result):
        print(name)
