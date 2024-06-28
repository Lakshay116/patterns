def print_rangoli(size):
    alpha=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
    t=0
    row=((2*size)-1)
    column=((2*size)-1)+((2*size)-2)
    for i in range(1):
        for j in range(row):
            if size==26:
                if j==size-1:
                    start=52-(size+size-1)
                    print('-'.join(alpha)[-start:-52:-1],end='')
                    print('-'.join(alpha)[1:size+size-1])
                elif j < size-1:
                    st_chr=52-(size+size-1)
                    end=st_chr+(j*2)+1
                    str_pnt='-'.join(alpha)[-st_chr:-end+1:-1]+'-'.join(alpha)[-end+1::+1]
                    print(str_pnt.center(column,'-'))
                elif j>size-1:
                    st_chr=52-(size+size-1)
                    t=t+2
                    end=52-t
                    str_pnt='-'.join(alpha)[-st_chr:-end+1:-1]+'-'.join(alpha)[-end+1::+1]
                    print(str_pnt.center(column,'-'))
            else:
                if j==size-1:
                    start=52-(size+size-1)
                    print('-'.join(alpha)[-start:-52:-1],end='')
                    print('-'.join(alpha)[1:size+size-1])
                elif j < size-1:
                    st_chr=52-(size+size-1)
                    end=st_chr+(j*2)+1
                    str_pnt='-'.join(alpha)[-st_chr:-end:-1]+'-'.join(alpha)[-end+2:-st_chr+1:+1]
                    print(str_pnt.center(column,'-'))
                elif j>size-1:
                    st_chr=52-(size+size-1)
                    t=t+2
                    end=52-t
                    str_pnt='-'.join(alpha)[-st_chr:-end:-1]+'-'.join(alpha)[-end+2:-st_chr+1:+1]
                    print(str_pnt.center(column,'-'))
        print()    

print_rangoli(26) 
