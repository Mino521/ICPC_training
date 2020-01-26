# Acperience {2 seconds}{64 megabytes}

Deep neural networks (DNN) have shown significant improvements in several application domains including computer vision and speech recognition. In computer vision, a particular type of DNN, known as Convolutional Neural Networks (CNN), have demonstrated state-of-the-art results in object recognition and detection.

Convolutional neural networks show reliable results on object recognition and detection that are useful in real world applications. Concurrent to the recent progress in recognition, interesting advancements have been happening in virtual reality (VR by Oculus), augmented reality (AR by HoloLens), and smart wearable devices. Putting these two pieces together, we argue that it is the right time to equip smart portable devices with the power of state-of-the-art recognition systems. However, CNN-based recognition systems need large amounts of memory and computational power. While they perform well on expensive, GPU-based machines, they are often unsuitable for smaller devices like cell phones and embedded electronics.

In order to simplify the networks, Professor Zhang tries to introduce simple, efficient, and accurate approximations to CNNs by binarizing the weights. Professor Zhang needs your help.

More specifically, you are given a weighted vector $W=(w_1,w_2,...,w_n)$. Professor Zhang would like to find a binary vector $B=(b_1,b_2,...,b_n)$ $(b_i \in \{+1,-1\})$ and a scaling factor $\alpha > 0$ in such a manner that $\left\| W - \alpha B \right\|^2$ is minimum.

Note that $\left\| \cdot \right\|$ denotes the Euclidean norm (i.e. $\left\| X \right\|=\sqrt {x_{1}^{2}+\cdots +x_{n}^{2}}$, where $X = (x_1, x_2, ..., x_n)$).

## Input

There are multiple test cases. The first line of input contains an integer $T$, indicating the number of test cases. For each test case:

The first line contains an integers $n$ $(1 \le n \le 100000)$ -- the length of the vector. The next line contains $n$ integers: $w_1, w_2, ..., w_n$ $(-10000 \le a_i \le 10000)$.

## Output

For each test case, output the minimum value of $\left\| W - \alpha B \right\|^2$ as an irreducible fraction "$p$/$q$" where $p$, $q$ are integers, $q > 0$.
## Sample Input

3
4
1 2 3 4
4
2 2 2 2
5
5 6 2 3 4

## Sample Output

5/1
0/1
10/1