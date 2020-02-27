## Lizard

Lizard lives on the river and feeds the Tiffy.  
  
Lizard is a small markup syntax designed to quickly and cleanly create web content. Lizard tags can not be nested and all share a common format to make it 
easy to read and write. All tags start and end with double curly braces. There is a small parser written in c++17 that takes lizard syntax in and 
gives its html equivalent as an output. Lizard syntax files should have the extension .liz.

### Headers

`{{ h1 title text }}`  
...   
`{{ h6 title text }}` 

### Links
`{{ li web_address link text }}`  

### Images
`{{ im image_location image rollover text }}`

### Text style

`{{ br }}` just replaced with a liine break.

`{{ bo bold text }}`

`{{ it italic text }}`

`{{ ul underlined text }}`

`{{ bq this stuff is in a blockquote }}`  

`{{ cb this is text in a code block }}`

### Lists
this is text before the list.  
`{{ bp bullet point text 1 }}`  
`{{ bp next list item }}`  
`{{ bp next list item}}`  
this is tex after the list.  

### Skipping tags.

It is possible to escape Lizard tags so that you can have them displayed in the content.

```\{{ bo this tag will be skipped and be displayed in the content with the leading \ removed }}```

