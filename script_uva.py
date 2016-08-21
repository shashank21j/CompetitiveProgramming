import json
from pprint import pprint
from urllib2 import Request, urlopen, URLError
from string import *
request = Request('http://uhunt.felix-halim.net/api/cpbook/3')

def slug(s):
    s = s.strip()
    s = s.lower()
    s = s.replace(' ', '-')
    test = set(digits + ascii_letters)
    res = ""
    for i in s:
        if i in test or i == '-':
            res += i
    return res

try:
    response = urlopen(request)
    book = eval(response.read())
    for chapter in book:
        print chapter['title']
        topics = chapter['arr']
        for topic in topics:
            print topic['title']
            subtopics = topic['arr']
            for i in subtopics:
                print i[0]
                for j in i[1:]:
                    url = "http://uhunt.felix-halim.net/api/p/num/" + str(abs(j))
                    request = Request(url)
                    response = urlopen(request)
                    response = eval(response.read())
                    print str(abs(j)) + "," + slug(response['title'])
            print ""
except URLError, e:
    print 'No kittez. Got an error code:', e
