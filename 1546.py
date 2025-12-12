N = int(input())
for i in range(N):
    K = int(input())
    for j in range(K):
        feedback = int(input())
        if feedback == 1:
            print("Rolien")
        elif feedback == 2:
            print("Naej")
        elif feedback == 3:
            print("Elehcim")
        else:
            print("Odranoel")
