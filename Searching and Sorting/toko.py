from telethon import TelegramClient,events
import random
import subprocess
import os
import requests, json
from pbwrap import Pastebin
from telethon import functions, types
import aiohttp
from datetime import datetime 
from pytz import timezone
from telethon.tl.types import ChannelParticipantsBanned
white=[1296026566,867524384,1022865230,705455070,795659622,262375806]

CUSTOM_TEXT={'en':'Speak English!',
             'pass':'you need to pass the test. leave the group and join again,a test button will appear on your screen. give that test, score well and get passed.',
             'ask':'Don\'t ask to ask',
             'pur':'What\'s',
             'link':'https://t.me/joinchat/VCUDq5aOJsF1WmEK',
             'hil':'That\'s hilarious my friend',
             'pm':'Hello there! Welcome to Hima\'s **PM**.\n Why would I **block** you?\n 1. I would **block** you for sending me a **Hi/Hello** in my PM!\n 2. I would **block** you for not stating the purpose of the PM!\n Before continuing , make sure you have agreed to the above terms:)'
             }
api_id = 1831623
api_hash = 'ef1dc0ee9ba64a7e8564fe64c37ee4b0'
client = TelegramClient('hima', api_id, api_hash)
client.start()
import logging
logging.basicConfig(format='[%(levelname) 5s/%(asctime)s] %(name)s: %(message)s',
                    level=logging.WARNING)
@client.on(events.NewMessage(outgoing=True,pattern="^!py.*"))
async def normal_handler(event):
    chunks=event.raw_text.split('\n')
    chunks=chunks[1:]
    #await event.reply(str(random.randint(1, 6)))
    this_folder = os.path.dirname(os.path.realpath(__file__))
    code_file = "code.py"

    #chunks=["print(\"hello\")","for i in range(10):\n   print(i)"]
    with open(f"{this_folder}/{code_file}", "w") as f_code:
        for chunk in chunks:
            f_code.write(f"{chunk}\n")
    errors=""
    s=""
    result = subprocess.run(["python",  "./"+code_file], capture_output=True, text=True)
    f=open("C:\\Users\\Himanshu\\Desktop\\tel.txt",'r')
    print(result.stderr)
    for i in result.stdout:
        s+=i
    for i in result.stderr:
        errors+=i
    if s=='':
        s='\n'
    if errors=='':
        errors=' '
    source ='\n'.join(chunks)
    response_string ="**Source:**\n`{}`\n\n**Result:** `{}`\n**Stderr:** `{}`".format(source,s,errors)
    await event.edit(response_string)

def utc_to_local(utc_dt):
    return utc_dt.replace(tzinfo=timezone('UTC')).astimezone(tz=timezone('Asia/Kolkata'))


@client.on(events.UserUpdate(chats=(705455070,1296026566)))
async def handler(event):
    dd=event.status
    if isinstance(dd,types.UserStatusOnline):
        mee=await client.get_entity('@Stepstosky')
        myy=await client.get_entity(1296026566)
        #print(myy)
        if isinstance(mee.status,types.UserStatusOnline):
            first_name='Sheetal'
            user_link='@Stepstosky'
            await client.send_message(-1001359393775, f'User [{first_name}]({user_link}) is online.')
        if isinstance(myy.status,types.UserStatusOnline):
            await client.send_message(1296026566, f'Bro, you are online.') 
        #time=d.datetime.now()
        #time = time.strftime("%Y-%m-%d  %H:%M:%S")
    if isinstance(mee,types.UserStatusOffline):
        #mee=client.get_entity('hima')
        #print('f'User Offline')
        first_name='Sheetal'
        user_link='@Stepstosky'
        await client.send_message(-1001359393775, f'User [{first_name}]({user_link}) has just gone offline.')
'''
@client.on(events.UserUpdate(chats=(1296026566,948725608)))
async def handler(event):
    dd=event.status
    if isinstance(dd,types.UserStatusOnline):
        #mee=client.get_entity('hima')
        print('ds')
        await client.send_message(948725608, f'bro, you are online.')
        #time=d.datetime.now()
        #time = time.strftime("%Y-%m-%d  %H:%M:%S")
    tz=timezone('Asia/Kolkata')
    if isinstance(dd,types.UserStatusOffline):
        #mee=client.get_entity('hima')
        await client.send_message(1296026566, f'You just went offline')
'''



@client.on(events.NewMessage(outgoing=True, pattern="^!b.*"))
async def convo(event):
    message=(await event.get_reply_message()).message
    a=[]
    lang=event.raw_text.split()[1]
    async with client.conversation('@rextester_bot') as conv:
        msg1 = await conv.send_message('/'+lang+'\n'+message)
        #msg1 = await conv.send_message(message)
        msg2 = (await conv.get_response()).message.split('\n')
        text=''
        ok=0;
        msg=''
        note=0
        if len(msg2)>1:
            print('gfgg')
            for i in msg2:
                if i=='Note:' or i=='Tip:':
                    note=1
                    a.append('`')
                    break
                if ok:
                    a.append(i)
                if i=='Result:': 
                    a.append('**Result:**`')
                    ok=1
                elif i=='Errors:':
                    a.append('**Errors:**`')
                    ok=1
            if note==0:
                a.append('`')
            msg='\n'.join(a)
            #print(msg)
        else:
            msg='Error:` Unknown language`'
        await event.edit(msg)


@client.on(events.NewMessage(outgoing=True, pattern="^!pp$", func=lambda e: e.is_reply)) 
async def purge(event):
  print(event)
  reply =await  event.get_reply_message()
  temp = [event.id]
  for msg in await client.get_messages(event.input_chat, min_id=reply.id-1, max_id=event.id):
    temp.append(msg.id)
  await client.delete_messages(event.input_chat, temp)

@client.on(events.NewMessage(outgoing=True, pattern="^!n.*",))
async def note(event):
    msg=event.raw_text[2:]
    try:
        message = (await event.get_reply_message()).id
        print(message)
        await client.delete_messages(event.input_chat,event.id)
        print(msg)
        response=f'{CUSTOM_TEXT[msg]}'
        await client.send_message(event.chat_id,response,reply_to=message)
    except AttributeError:
        await client.delete_messages(event.input_chat,event.id)
        print(msg)
        response=f'{CUSTOM_TEXT[msg]}'
        await client.send_message(event.chat_id,response)

@client.on(events.NewMessage(outgoing=True, pattern=r'\.save'))
async def handler(event):
    if event.is_reply:
        replied = await event.get_reply_message()
        sender = replied.sender
        path=await client.download_profile_photo(sender)
        await event.respond('Saved your photo {}'.format(sender.username))
        print(path)


@client.on(events.NewMessage(outgoing=True, pattern=r'\.res'))
async def res(event):
    print('here')
    count=0
    async for user in client.iter_participants(-1001411711915):
        permis=await client.get_permissions(-1001411711915,user)
        if not permis.has_default_permissions and permis.is_admin==False:
            count+=1
    print(count)
    



@client.on(events.NewMessage(incoming=True, func=lambda e: e.is_private))
async def my_event_handler(event):
    if event.chat_id not in white:
        await client.send_message(event.chat_id,CUSTOM_TEXT['pm'])

@client.on(events.NewMessage(outgoing=True, pattern="^.f.*"))
async def cff(event):
    hd=event.raw_text.split()[1]
    try:
        response = requests.get(f'https://codeforces.com/api/user.status?handle={hd}&from=1&count=100')
        js=(response.json())
        dct={}
        target=5
        link='https://codeforces.com/problemset/problem/'
        for i in js['result']:
            if i['verdict']=='OK':
                try:
                    dct[str(i['problem']['contestId'])+str(i['problem']['index'])]=[i['problem']['name'],i['problem']['rating'],link+str(i['problem']['contestId'])+'/'+str(i['problem']['index'])]
                except KeyError:
                    dct[str(i['problem']['contestId'])+str(i['problem']['index'])]=[i['problem']['name'],'?',link+str(i['problem']['contestId'])+'/'+str(i['problem']['index'])]
            
                    
            if len(dct)==target:
                break
        s=''
        for i in dct:
            s+=f'[{dct[i][0]}]({dct[i][2]}) '+f',rating=`{dct[i][1]}`\n'
        response=f'User **{hd}**\'s last five successful submissions are:\n{s}'
        print("once")
        await event.edit(response,link_preview=False)
    except KeyError:
        response_string=f"Handle **{hd}** doesn't exist:/"
        await event.edit(response_string)

@client.on(events.NewMessage(outgoing=True, pattern="^!bf.*"))
async def cfff(event):
    url='https://codeforces.com/api/user.rating?handle='
    hd=event.raw_text.split()[1]
    #print(hd)
    response = requests.get(url+hd)
    js=(response.json())
    try:
        dct=js['result']
        max_rank=-1
        min_rank=10000000
        max_cont=''
        min_cont=''
        max_id=''
        min_id=''
        for i in dct:
                #print(i)
            if i['rank']>max_rank:
                max_cont=i['contestName']
                max_rank=i['rank']
                max_id=i['contestId']
                    #print(max_cont)
            if i['rank']<min_rank:
                min_cont=i['contestName']
                min_rank=i['rank']
                min_id=i['contestId']
                max_rank=max(max_rank,i['rank'])
                min_rank=min(min_rank,i['rank'])
        url1='https://codeforces.com/api/contest.status?contestId={}&from=1&count=20&handle={}'
        response1 = requests.get(url1.format(max_id,hd))
        response2 = requests.get(url1.format(min_id,hd))
        js1=response1.json()
        js2=response2.json()
        dct1=js1['result']
        dct2=js2['result']
        has={}
        has1={}
        question_solved1=0
        question_solved2=0
        for i in dct1:
            if i['verdict']=='OK' and i['author']['participantType']=='CONTESTANT':
                has['contestId'+i['problem']['index']]=1
        for i in dct2:
            if i['verdict']=='OK' and i['author']['participantType']=='CONTESTANT':
                has1['contestId'+i['problem']['index']]=1
        #print(len(has),len(has1))
        question_solved1=len(has)
        question_solved2=len(has1)
        reponse3=f'User **{hd}** has achieved highest rank `{min_rank}` during round **{min_cont}** with `{question_solved2}` problem/problems solved\n'+f'User **{hd}** has achieved lowest rank `{max_rank}` during round **{max_cont}** with `{question_solved1}` problem/problems solved\n'
        await event.edit(reponse3)
    except KeyError:
        await event.edit(f'Handle {hd} doesn\'t exist :/')
    print(max_rank,min_rank,max_cont)


@client.on(events.NewMessage(outgoing=True, pattern="^!s.*"))
async def spam(event):
    msg_id=event.id
    chat_id=event.chat_id
    await client.delete_messages(event.input_chat, msg_id)
    print(chat_id)
    words=event.raw_text.split()
    num=int(words[2])
    text=words[1]
    for i in range(num):
        await client.send_message(chat_id,text)

@client.on(events.NewMessage(outgoing=True, pattern="^.pin$"))
async def pin(event):
    my_id=event.id
    print(event.chat_id)
    msg_id=ent.reply_to_msg_id
    await client.delete_messages(event.input_chat, event.id)
    await client.pin_message(event.chat_id,msg_id)

@client.on(events.NewMessage(outgoing=True, pattern="^.unpin$"))
async def unpin(event):
    print(event.chat_id)
    await client.delete_messages(event.input_chat, event.id)
    await client.unpin_message(event.chat_id)

@client.on(events.NewMessage(outgoing=True, pattern="^.dl$"))
async def dl(event):
  ids=[event.id]
  ids.append(event.reply_to_msg_id)
  await client.delete_messages(event.input_chat, ids)
  
@client.on(events.NewMessage(outgoing=True, pattern="^.cf.*"))
async def cf(event):
    hd=event.raw_text.split()[1]
    response = requests.get('https://codeforces.com/api/user.info?handles='+hd)
    js=(response.json())
    try:
        dct=js['result'][0]
        handle=dct['handle']
        maxr=dct['maxRating']
        maxrr=dct['maxRank']
        cur_rank=dct['rank']
        rating=dct['rating']
        friends=dct['friendOfCount']
        org=dct.get('organization','')
        response_string = ("**Codeforces handle:** {}\n**Current rank**: {}\n**Current rating:** `{}`\n**Max rating:** `{}`\n**Max rank:** {}\n**Friend of:** `{}`\n**Organization: **{}".format(handle,cur_rank,rating,maxr,maxrr,friends,org))
        await event.edit(response_string)
    except KeyError:
        response_string=f"Handle **{hd}** doesn't exist:/"
        await event.edit(response_string)
        
  #await client.delete_messages(event.input_chat, ids)


@client.on(events.NewMessage(outgoing=True, pattern="^.ed$"))
async def ddd(target):
    message = (await target.get_reply_message())
    await client.delete_messages(target.input_chat, target.id)
    await client.forward_messages(1359393775, message.id, target.chat_id)

@client.on(events.NewMessage(outgoing=True, pattern="^!paste$"))
async def haste(event):
    msg=(await event.get_reply_message())
    content=msg.message
    async with aiohttp.ClientSession() as session:
        async with session.post("https://hastebin.com/documents",data=content.encode('utf-8')) as post:
            post = await post.json()
    ids=[event.reply_to_msg_id]
    await client.delete_messages(event.input_chat,ids)
    link="https://hastebin.com/{}".format(post['key'])
    first_name=msg.sender.first_name
    user_link=f'tg://user?id={msg.sender.id}'
    #print(user_link)
    response=f'Hey [{first_name}]({user_link}), your wall of text is moved to `\U0001F447` {link}\n\nPlease use a online pasting service to send your code when it\'s too lengthy. Next time ,you will be warned!\nHere\'s a list of few: - \n- https://del.dog\n- https://dpaste.org\n- https://linkode.org\n- https://hastebin.com\n- https://bin.kv2.dev\n- pastebin.com'
    await client.send_message(event.chat_id,response) 
    
@client.on(events.NewMessage(outgoing=True, pattern="^.d$"))
async def d(target):
    message = await target.get_reply_message()
    if message:
        if not message.forward:
            user_id = message.sender.id
            if message.sender.username:
                name = "@" + message.sender.username
            else:
                name = "**" + message.sender.first_name + "**"
            first_name=message.sender.first_name
        else:
            user_id = message.forward.sender.id
            if message.forward.sender.username:
                name = "@" + message.forward.sender.username
            else:
                name = "*" + message.forward.sender.first_name + "*"
            first_name=message.forward.sender.first_name
    await target.edit("**Username:**{} \n**First Name:** {} \n**User ID:** `{}`".format(name,first_name, user_id))


client.run_until_disconnected()

