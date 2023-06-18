def tree(preOrder,inOrder):
    if not preOrder:
        return []
    root=preOrder[0]
    r_pos=inOrder.index(root)
    left_in=inOrder[:r_pos]
    right_in=inOrder[r_pos+1:]
    left_pre=preOrder[1:1+len(left_in)]
    right_pre=preOrder[1+len(left_in):] 
    left_post=tree(left_pre,left_in)
    right_post=tree(right_pre,right_in)
    return left_post+right_post+[root]
n=int(input())
for x in range(n):
    str=input()
    s=str.split()
    postOrder=tree(s[1],s[2])
    for i in range(int(s[0])):
        print(postOrder[i],end="")
    print()

