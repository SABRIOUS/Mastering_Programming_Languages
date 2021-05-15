a = "https://py2.codeskulptor.org/#user48_6HuhjgLgE3_11.py"
# template for "Stopwatch: The Game"
import simplegui
# define global variables

counter = 0
sucess_stop = 0
total_stop = 0
stopwatch_run = False
# define helper function format that converts time
# in tenths of seconds into formatted string A:BC.D
def nice_format(a,b,c):
    result = str(a)+':'+str(b)+'.'+str(c)
    if a == 0 and b == 0 and c == 0:
        return '0:00.0'
    if b < 10:
        result = str(a)+':'+'0'+str(b)+'.'+str(c)
    return result

def format(x):
    a_minutes = x//600
    reminders = x // 10
    bc_seconds = reminders %60
    d_tenths_second= x % 10
    return nice_format(a_minutes,bc_seconds,d_tenths_second)

# define event handlers for buttons; "Start", "Stop", "Reset"
def start():
    global stopwatch_run
    stopwatch_run = True
    timer.start()

def stop():
    global sucess_stop,total_stop,stopwatch_run,counter
    if stopwatch_run == True and counter % 10 == 0:
        sucess_stop += 1
        total_stop += 1
        timer.stop()
        stopwatch_run = False
    elif stopwatch_run == True:
        total_stop += 1
        timer.stop()
        stopwatch_run = False
    else:
        timer.stop()
        stopwatch_run = False

def reset():
    global counter,sucess_stop,total_stop
    counter,sucess_stop,total_stop = 0,0,0
# define event handler for timer with 0.1 sec interval

def timer_handler():
    global counter
    counter += 1

def score():
    global sucess_stop,total_stop
    res = "sucess_stop= "+str(sucess_stop)+'    '+"total_stop= "+str(total_stop)
    return res

# define draw handler
def draw(canvas):
    canvas.draw_text(format(counter),[200,200],39,"white")
    canvas.draw_text(score(), [50, 25], 25, 'Green')

# create frame
frame = simplegui.create_frame("Stopwatch",500,500)
# register event handlers


# start frame

frame.add_button("Start",start,100)
frame.add_button("Stop",stop,100)
frame.add_button("Reset",reset,100)
frame.set_draw_handler(draw)

timer = simplegui.create_timer(100, timer_handler)
frame.start()
#timer.start()
# Please remember to review the grading rubric
