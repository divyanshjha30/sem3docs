import numpy as np
the_array = np.array([[1, 2], [3, 4]])
print("original array is:")
print(the_array)
columns_to_append = [5, 6]
the_array = np.insert(the_array, 2, columns_to_append, axis=0)
print("array after adding list to it: ")
print(the_array)


