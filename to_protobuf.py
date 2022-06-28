import numpy as np
import img_copy_pb2
from PIL import Image
import base64
#...

img2 = Image.open('belka.png')
img = ('belka.png')




my_img = img_copy_pb2.image()

# my_img.width = img.width
my_img.id = 0
my_img.width = img2.size[0]
my_img.height = img2.size[1]
# my_img.width =  
# my_metric.name = 'sys.cpu'
# my_metric.type = 'gauge'
# my_metric.value = 99.9
# my_metric.tags.extend([‘my_tag’, ‘foo:bar’])
with open(img, "rb") as image:
  f = image.read()
  b = bytes(f)
  
# my_img.image = bytes(open(img).read())
# my_img.image = (open(img).read())
my_img.image = b
with open('out.bin', 'wb') as f:
    f.write(my_img.SerializeToString())

# with open(img, mode='wb') as f:
#         f.write(base64.b64decode(my_img.image))

# Create a dummy matrix
#img = np.ones((50, 50, 3), dtype=np.uint8) * 255
# Save the shape of original matrix.
# img_shape = img.shape

# print(img)

# message_image = np.ndarray.tobytes(img)

# re_img = np.frombuffer(message_image, dtype=np.uint8)

# # Convert back the data to original image shape.
# re_img = np.reshape(re_img, img_shape)
