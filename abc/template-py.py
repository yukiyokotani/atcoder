import os

print("Input folder name like 'ABC000'")
folder = input()

os.mkdir('./{}'.format(folder))
open('./{0}/python/a.py'.format(folder),'w').close()
open('./{0}/python/b.py'.format(folder),'w').close()
open('./{0}/python/c.py'.format(folder),'w').close()
open('./{0}/python/d.py'.format(folder),'w').close()