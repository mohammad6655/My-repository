void split(*head, **h1, **h2)
{
    struct node *sp, *fp;
    sp = head;
    fp = head;
    if (head == NULL)
        return;
    while (fp->next != head && fp->next->next != head)
    {
        fp = fp->next->next;
        sp = sp->next;
    }
    if (fp->next->next == head)
        fp = fp->next;
    *h1 = head;
    if (head->next != head)
        *h2 = sp->next;
    fp->next = sp->next;
    sp->next = head;
}