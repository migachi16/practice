import os # getting various os information
import time # time library for waiting/timing
import smtplib # simple mail transfer protocol

date = time.ctime()
cwd = os.getcwd()

print('It is ', date, ' and our dir is ', cwd)

def send_email() -> None:
    domain_port = smtplib.SMTP('smtp.gmail.com', 587)
    domain_port.ehlo()
    domain_port.starttls()

    #####################domain_port.login(username, password)##############################

    domain_port.sendmail('migachi16@gmail.com', 'pwqptsngfuwtretxme@kvhrw.com', 'Subject: We are evolving. \n!!!')
    print('Email sent')

def file_create(destination: str) -> None:
    if not(os.path.isfile(destination)):
        file = open(destination, 'w')
        file.write('New Python Script')
        file.close()
        print('File created.')

def test(**kwargs) -> None:
    for entry in kwargs.items(): # So like a dict? can do kwargs.keys(), .values(), .items() as expected
        print(entry)

destination = 'C:\\Users\\micha\\OneDrive\\Desktop\\scriptingh\\sample_1.py'

#file_create(destination)
#send_email()

#test(a=1, c=2, q=3, d=4, b=5, b1=5)


