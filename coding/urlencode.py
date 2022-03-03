#第一个quote函数可以直接对字符串进行url编码，可以使用 unquote函数进行解码
#urlencode函数能对字典模式的键值对进行url 编码。
import urllib.parse
print(urllib.parse.quote("flag{url_encode_1234_!@#$}"))
d = {'name':'bibi@flappypig.club','flag':'flag{url_encode_123 4_!@#$}'}
print(urllib.parse.urlencode(d))