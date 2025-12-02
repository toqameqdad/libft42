<p><em>This project has been created as part of the 42 curriculum by &lt;tmeqdad&gt;.</em></p>

<h1>libft</h1>

<h2>Description</h2>
<p><strong>libft</strong> is a custom C library built as part of the 42 curriculum.  
It reimplements standard C functions and adds utilities for:</p>
<ul>
  <li>Character checks and conversions</li>
  <li>String manipulation</li>
  <li>Memory management</li>
  <li>Input/Output</li>
  <li>Linked lists</li>
  <li>Number conversions</li>
</ul>
<p>The project strengthens programming fundamentals, memory management skills, and modular programming practices.</p>

<h2>Instructions</h2>
<p>Compile the library:</p>
<pre><code>git clone &lt;git@github.com:toqameqdad/libft42.git&gt;
cd libft
make
</code></pre>

<p>Use it in your projects:</p>
<pre><code>gcc main.c -L. -lft -I./includes
</code></pre>

<p>Example usage in code:</p>
<pre><code>#include "libft.h"
#include &lt;stdio.h&gt;

int main(void)
{
    char *s = ft_strdup("Hello, libft!");
    printf("%s\n", s);
    free(s);
    return 0;
}
</code></pre>

<h2>Library Overview</h2>

<h3>Character Checks</h3>
<ul>
  <li>ft_isalpha</li>
  <li>ft_isdigit</li>
  <li>ft_isalnum</li>
  <li>ft_isascii</li>
  <li>ft_isprint</li>
</ul>

<h3>Character Conversion</h3>
<ul>
  <li>ft_toupper</li>
  <li>ft_tolower</li>
</ul>

<h3>Strings</h3>
<ul>
  <li>ft_strlen</li>
  <li>ft_strdup</li>
  <li>ft_strchr</li>
  <li>ft_strrchr</li>
  <li>ft_strncmp</li>
  <li>ft_strnstr</li>
  <li>ft_substr</li>
  <li>ft_strjoin</li>
  <li>ft_strtrim</li>
  <li>ft_split</li>
  <li>ft_strlcpy</li>
  <li>ft_strlcat</li>
  <li>ft_strmapi</li>
  <li>ft_striter</li>
</ul>

<h3>Memory</h3>
<ul>
  <li>ft_memset</li>
  <li>ft_bzero</li>
  <li>ft_memcpy</li>
  <li>ft_memmove</li>
  <li>ft_memcmp</li>
  <li>ft_memchr</li>
  <li>ft_calloc</li>
</ul>

<h3>Input/Output</h3>
<ul>
  <li>ft_putchar_fd</li>
  <li>ft_putstr_fd</li>
  <li>ft_putendl_fd</li>
  <li>ft_putnbr_fd</li>
</ul>

<h3>Conversion</h3>
<ul>
  <li>ft_itoa</li>
  <li>ft_atoi</li>
</ul>

<h3>Linked Lists</h3>
<ul>
  <li>ft_lstnew</li>
  <li>ft_lstadd_front</li>
  <li>ft_lstsize</li>
  <li>ft_lstlast</li>
  <li>ft_lstadd_back</li>
  <li>ft_lstdelone</li>
  <li>ft_lstclear</li>
  <li>ft_lstiter</li>
  <li>ft_lstmap</li>
</ul>

<h2>Resources</h2>
<ul>
  <li><a href="https://www.42.fr">42 Network</a></li>
  <li>C standard documentation</li>
  <li>AI (ChatGPT) was used for explanations and guidance; all code was written by the student.</li>
</ul>
