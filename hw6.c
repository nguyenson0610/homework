
int pinLed[] = {0, 1, 2, 3, 4, 5, 6};
int button1 = 12;
int button2 = 13;

void sangDuoi()
{
    if (DelayandCheck(200) == 1)
    {
        sangDuoi();
        goto out;
    }
    else if (DelayandCheck(200) == 2)
    {
        sangTat();
        goto out;
    }
out:
    for (int i = 0; i < 7; i++)
    {
        digitalWrite(pinLed[i], LOW);
        delay(500);
    }

    for (int i = 0; i < 7; i++)
    {
        digitalWrite(pinLed[i], HIGH);
        delay(500);
    }
}

void sangTat()
{
    if (DelayandCheck(200) == 1)
    {
        sangDuoi();
        goto out;
    }
    else if (DelayandCheck(200) == 2)
    {
        sangTat();
        goto out;
    }
out:
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 7; i++)
        {
            digitalWrite(pinLed[i], HIGH);
        }
        delay(1000);
        for (int i = 0; i < 7; i++)
        {
            digitalWrite(pinLed[i], LOW);
        }
        delay(1000);
    }
}
int nutnhan1()
{
    if (digitalRead(button1) == HIGH)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int nutnhan2()
{
    if (digitalRead(button2) == HIGH)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

int DelayandCheck(int mdelay)
{
    for (int i = 0; i < (mdelay / 10); i++)
    {
        if (nutnhan1() == 1)
        {
            return 1;
        }
        else if (nutnhan2() == 2)
        {
            return 2;
        }
        delay(10);
    }
}

void setup()
{
    for (int i = 0; i <= 7; i++)
    {
        pinMode(pinLed[i], OUTPUT);
        digitalWrite(pinLed[i], LOW);
    }
    pinMode(button1, INPUT);
    pinMode(button2, INPUT);
}

void loop()
{
    if (DelayandCheck(200) == 1)
    {
        sangDuoi();
        goto out;
    }
    else if (DelayandCheck(200) == 2)
    {
        sangTat();
        goto out;
    }
out:
    sangTat();
    delay(100);
    if (DelayandCheck(200) == 1)
    {
        sangDuoi();
        goto out2;
    }
    else if (DelayandCheck(200) == 2)
    {
        sangTat();
        goto out2;
    }
out2:
    sangDuoi();
}