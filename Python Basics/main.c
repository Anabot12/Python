a = {1, 2, 3}
b = {1, 2, 4, 6}
print ("The two sets are:   ", a, b)
print ("The union is:   ", a.union(b), a|b) # union
print ("The intersection is:   ", a.intersection(b), a&b) # intersection
print ("The difference of a & b is:   ", a.difference(b), a-b) # elements in a but not in b
print ("The difference of b & a is:   ", b.difference(a), b-a) # elements in b but not in a