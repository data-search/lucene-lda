nsaboutlookcard
nsabwinhelper
nsiprefservice
nsiprefbranch
nsiaddrbooksession
nsabbasecid
prlog
ifdef
prlogging
prlogmoduleinfo
gaboutlookcardlog
prnewlogmodule
nsaboutlookcardlog
endif
define
printf
args
prlog
gaboutlookcardlog
prlogdebug
args
koutlookdirectoryscheme
koutlookcardscheme
nsaboutlookcard
nsaboutlookcard
nsrdfresource
nsabcardproperty
mabwintype
nsabwintypeunknown
mmapidata
nsnull
mmapidata
nsmapientry
nsaboutlookcard
nsaboutlookcard
mmapidata
mmapidata
nsimplisupportsinherited
nsaboutlookcard
nsrdfresource
nsiabcard
splitstring
nsstring
asource
nsstring
atarget
atarget
truncate
print
offset
asource
findchar
offset
prunichar
source
asource
get
offset
source
source
source
atarget
append
prunichar
atarget
append
source
source
asource
truncate
offset
wordtounicode
word
aword
nsstring
aunicode
aunicode
truncate
aunicode
appendint
print
aword
indexdisplayname
indexemailaddress
indexfirstname
indexlastname
indexnickname
indexworkphonenumber
indexhomephonenumber
indexworkfaxnumber
indexpagernumber
indexmobilenumber
indexhomecity
indexhomestate
indexhomezip
indexhomecountry
indexworkcity
indexworkstate
indexworkzip
indexworkcountry
indexjobtitle
indexdepartment
indexcompany
indexworkwebpage
indexhomewebpage
indexcomments
indexlastprop
ulong
outlookcardmapiprops
prdisplaynamew
premailaddressw
prgivennamew
prsurnamew
prnicknamew
prbusinesstelephonenumberw
prhometelephonenumberw
prbusinessfaxnumberw
prpagertelephonenumberw
prmobiletelephonenumberw
prhomeaddresscityw
prhomeaddressstateorprovincew
prhomeaddresspostalcodew
prhomeaddresscountryw
prbusinessaddresscityw
prbusinessaddressstateorprovincew
prbusinessaddresspostalcodew
prbusinessaddresscountryw
prtitlew
prdepartmentnamew
prcompanynamew
prbusinesshomepagew
prpersonalhomepagew
prcommentw
nsresult
nsaboutlookcard
init
auri
nsresult
retcode
nsrdfresource
init
auri
nsensuresuccess
retcode
retcode
nscautostring
entry
nscautostring
stub
mabwintype
getabwintype
koutlookcardscheme
muri
stub
entry
mabwintype
nsabwintypeunknown
printf
huge
problem
uri
muri
nserrorinvalidarg
nsabwinhelperguard
mapiaddbook
mabwintype
mapiaddbook
isok
nserrorfailure
mmapidata
assign
entry
nsstringarray
unichars
ulong
mapiaddbook
getpropertiesustring
mmapidata
outlookcardmapiprops
indexlastprop
unichars
setfirstname
unichars
indexfirstname
get
setlastname
unichars
indexlastname
get
setdisplayname
unichars
indexdisplayname
get
setnickname
unichars
indexnickname
get
setprimaryemail
unichars
indexemailaddress
get
setworkphone
unichars
indexworkphonenumber
get
sethomephone
unichars
indexhomephonenumber
get
setfaxnumber
unichars
indexworkfaxnumber
get
setpagernumber
unichars
indexpagernumber
get
setcellularnumber
unichars
indexmobilenumber
get
sethomecity
unichars
indexhomecity
get
sethomestate
unichars
indexhomestate
get
sethomezipcode
unichars
indexhomezip
get
sethomecountry
unichars
indexhomecountry
get
setworkcity
unichars
indexworkcity
get
setworkstate
unichars
indexworkstate
get
setworkzipcode
unichars
indexworkzip
get
setworkcountry
unichars
indexworkcountry
get
setjobtitle
unichars
indexjobtitle
get
setdepartment
unichars
indexdepartment
get
setcompany
unichars
indexcompany
get
setwebpage
unichars
indexworkwebpage
get
setwebpage
unichars
indexhomewebpage
get
setnotes
unichars
indexcomments
get
ulong
cardtype
nscautostring
normalchars
mapiaddbook
getpropertylong
mmapidata
probjecttype
cardtype
setismaillist
cardtype
mapidistlist
cardtype
mapidistlist
buildabwinuri
koutlookdirectoryscheme
mabwintype
normalchars
normalchars
append
entry
setmaillisturi
normalchars
get
nsautostring
unichar
nsautostring
unicharbis
mapiaddbook
getpropertyustring
mmapidata
prhomeaddressstreetw
unichar
splitstring
unichar
unicharbis
sethomeaddress
unichar
get
sethomeaddress
unicharbis
get
mapiaddbook
getpropertyustring
mmapidata
prbusinessaddressstreetw
unichar
splitstring
unichar
unicharbis
setworkaddress
unichar
get
setworkaddress
unicharbis
get
word
year
word
month
word
day
mapiaddbook
getpropertydate
mmapidata
prbirthday
year
month
day
wordtounicode
year
unichar
setbirthyear
unichar
get
wordtounicode
month
unichar
setbirthmonth
unichar
get
wordtounicode
day
unichar
setbirthday
unichar
get
retcode
unicodetoword
prunichar
aunicode
word
aword
aword
aunicode
nsnull
aunicode
print
errorcode
nsautostring
unichar
aunicode
aword
nsstaticcast
word
unichar
tointeger
errorcode
errorcode
printf
error
conversion
unichar
get
errorcode
define
prefmailaddrbooklastnamefirst
mail
addrbook
lastnamefirst
nsimethodimp
nsaboutlookcard
editcardtodatabase
auru
nsresult
retcode
nsok
nsxpidlstring
properties
nsnull
nsautostring
utility
nsabwinhelperguard
mapiaddbook
mabwintype
mapiaddbook
isok
nserrorfailure
properties
nsxpidlstring
indexlastprop
properties
nserroroutofmemory
getfirstname
gettercopies
properties
indexfirstname
getlastname
gettercopies
properties
indexlastname
getdisplayname
gettercopies
properties
indexdisplayname
properties
indexdisplayname
get
nsresult
rv
nscomptr
nsiprefservice
prefs
dogetservice
nsprefservicecontractid
rv
nsensuresuccess
rv
rv
nscomptr
nsiprefbranch
prefbranch
rv
prefs
getbranch
nsnull
getteraddrefs
prefbranch
nsensuresuccess
rv
rv
print
format
rv
prefbranch
getintpref
prefmailaddrbooklastnamefirst
format
nsensuresuccess
rv
rv
nscomptr
nsiaddrbooksession
absession
dogetservice
nsaddrbooksessioncontractid
rv
nsensuresuccess
rv
rv
rv
absession
generatenamefromcard
format
gettercopies
properties
indexdisplayname
nsensuresuccess
rv
rv
properties
indexdisplayname
get
getprimaryemail
gettercopies
properties
indexdisplayname
setdisplayname
properties
indexdisplayname
getnickname
gettercopies
properties
indexnickname
getprimaryemail
gettercopies
properties
indexemailaddress
getworkphone
gettercopies
properties
indexworkphonenumber
gethomephone
gettercopies
properties
indexhomephonenumber
getfaxnumber
gettercopies
properties
indexworkfaxnumber
getpagernumber
gettercopies
properties
indexpagernumber
getcellularnumber
gettercopies
properties
indexmobilenumber
gethomecity
gettercopies
properties
indexhomecity
gethomestate
gettercopies
properties
indexhomestate
gethomezipcode
gettercopies
properties
indexhomezip
gethomecountry
gettercopies
properties
indexhomecountry
getworkcity
gettercopies
properties
indexworkcity
getworkstate
gettercopies
properties
indexworkstate
getworkzipcode
gettercopies
properties
indexworkzip
getworkcountry
gettercopies
properties
indexworkcountry
getjobtitle
gettercopies
properties
indexjobtitle
getdepartment
gettercopies
properties
indexdepartment
getcompany
gettercopies
properties
indexcompany
getwebpage
gettercopies
properties
indexworkwebpage
getwebpage
gettercopies
properties
indexhomewebpage
getnotes
gettercopies
properties
indexcomments
mapiaddbook
setpropertiesustring
mmapidata
outlookcardmapiprops
indexlastprop
properties
printf
cannot
set
general
properties
properties
nsxpidlstring
unichar
nsxpidlstring
unichar
word
year
word
month
word
day
gethomeaddress
gettercopies
unichar
gethomeaddress
gettercopies
unichar
utility
assign
unichar
get
utility
isempty
utility
appendwithconversion
crlf
utility
append
unichar
get
mapiaddbook
setpropertyustring
mmapidata
prhomeaddressstreetw
utility
get
printf
cannot
set
home
address
getworkaddress
gettercopies
unichar
getworkaddress
gettercopies
unichar
utility
assign
unichar
get
utility
isempty
utility
appendwithconversion
crlf
utility
append
unichar
get
mapiaddbook
setpropertyustring
mmapidata
prbusinessaddressstreetw
utility
get
printf
cannot
set
work
address
getbirthyear
gettercopies
unichar
unicodetoword
unichar
get
year
getbirthmonth
gettercopies
unichar
unicodetoword
unichar
get
month
getbirthday
gettercopies
unichar
unicodetoword
unichar
get
day
mapiaddbook
setpropertydate
mmapidata
prbirthday
year
month
day
printf
cannot
set
date
retcode