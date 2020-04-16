# Week 4 Exercise - Python webscraper

![img](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/WeChate64e5e5563a2e56316fbc4f38a703ed9.png)

⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️⬇️

![img](https://github.com/lalisa777/xiaojielin/blob/master/Advanced%20Physical%20Computing/file/WeChat8817210ff0c1c145959cf06a1c8447fd.png)

The function of this lab is to scrape all the stories in the hyperlinks in the web page (http://www.rensheng5.com/zx/onduzhe/ as shown in the first picture) and store them in a folder named Articles (as shown in the second picture)

## What did I learn?

### Have a general understanding of web page structure  
  Most of the web pages are composed of HTML / CSS / JS. When scraping, it is mainly aimed at the content of the body part in   HTML. Through the study of the structure of source code, I knew how to find the location of the content I want to scrape in   the source code.
  
### The way to scrape web pages
  I learned how to use request and BeautifulSoup to scrape web information. My understanding is that it can be divided into three steps: 
  1. Specify the target URL; 
  2. Use request to send requests and establish connections; 
  3. Use BS4 to scrape web pages and obtain data
  * AN IMPRESSIVE  PROBLEM I MET  
  When I have used <.find all> and want to continue using it, the execution failed. After searching a lot of learning      materials, I understood that when I executed <.find all> for the first time, I got a set of data instead of one single data. So when I want to execute <.find all> for every data of this set again, I need to use for to go through every data. This gives me a deeper understanding of data types.

### The way to use os  
  How to create, edit and delete files by code  
  
## Why did I choose this web?  
  Reader is a magazine that was popular in China when I was in middle school.There are many good literary works in it, so basically every middle school Chinese teacher would let us recite the articles in it as the accumulation of writing materials. Also, there are many interesting stories, such as love stories, suspense stories and so on. This magazine accompanied my whole middle school time, so when I think of scraping for articles, my first thought isReader. But when I wanted to use summary to summarize and extract keywords, I found that because the Reader are Chinese articles, summary can't handle it.😭

  
  
