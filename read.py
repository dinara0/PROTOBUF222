import numpy as np
import img_copy_pb2
from PIL import Image
import base64
#...

with open('out.bin', 'rb') as f:
    read_image = img_copy_pb2.image()
    print(read_image.ParseFromString(f.read()))


read_image.write(str.decode('base64'))

    # do something with read_metric