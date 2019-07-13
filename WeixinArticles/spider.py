from urllib.parse import urlencode
import requests
from requests.exceptions import ConnectionError

base_url = 'https://weixin.sogou.com/weixin?'
keyword = '风景图片'
headers = {
    'Cookie': 'SUID=08FF76B62313940A000000005C385599; SUV=008325CCB676FF085C38559ABE080057; IPLOC=CN3100; ABTEST=7|1562985597|v1; SNUID=52F51C573234BFB4C37DA74632C49B27; weixinIndexVisited=1; sct=1; JSESSIONID=aaaIPUoer5IjA7OING6Qw',
    'host': 'weixin.sogou.com',
    'Upgrade-Insecure-Requests': '1',
    'User-Agent': 'Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/75.0.3770.100 Safari/537.36'
}


def get_html(url):
    try:
        response = requests.get(url, allow_redirects=False, headers=headers)
        if response.status_code == 200:
            return response.text
        if response.status_code == 302:
            # Need Proxy
            print(302)
    except ConnectionError:
        return get_html(url)

def get_index(keyword,page):
    data = {
        'query': keyword,
        'type': 2,
        'page': page

    }
    queries = urlencode(data)
    url = base_url + queries
    html = get_html(url)
    return html

def main():
    for page in range(1,101):
        html = get_index(keyword,page)
        print(html)

if __name__ == '__main__':
    main()