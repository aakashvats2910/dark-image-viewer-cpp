# dark-image-viewer-cpp

This is a simple python program to convert not-so useful dark/night images into informative images so that we can generate good data out of those.

<h3>Working</h3>
The working of this script is simple.
<ol>
<li>It takes an image</li>
<li>It iterates on all the pixel values of the image on all channels.</li>
<li>Now it identifies the dark pixels whose value lies between 2 to 10 (inclusive).</li>
<li>Then it makes those pixels negative (255 - pixel_value) on eligible pixels (Point no. 3)</li>
</ol>

<i>It however does not include pixels with value "0" (Zero).</i>

# Some samples
<h3>Original Image</h3><br/>
<img src="https://i.imgur.com/WWaiF3A.jpg"/>
<h3>Converted Image</h3><br/>
<img src="https://i.imgur.com/BqlAgXg.jpg"/>

Here we can clearly see many more details in the converted image, namely,
<ul>
<li>The branches of the tree.</li>
<li>On left and right sides of image, we can clearly see the number of trunks present.</li>
<li>On left side we can see a tree in "White" color and another tree in the same area colored as "Red" even though both are mixed in the same frame.</li>
</ul>

<h2>Other examples</h2>

<table>
  <tr>
    <td>Original Image</td>
    <td>Converted Image</td>
  </tr>
  <tr>
    <td><img src="https://i.imgur.com/RNacECz.png"><br/></td>
    <td><img src="https://i.imgur.com/NC0YIAf.jpg"><br/></td>
  </tr>
  <tr>
    <td><img src="https://i.imgur.com/1E8spAI.png"><br/></td>
    <td><img src="https://i.imgur.com/UrFGiV5.jpg"><br/></td>
  </tr>
</table>


  
# Run on your machine
1. Add the opencv library in your project
2. Add the required .dll and .lib file (dynamic linking)
3. Compile and run your project.

