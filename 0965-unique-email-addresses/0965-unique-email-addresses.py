class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        res = set()
        for email in emails:
            local,domain = email.split('@')
            if '+' in local:
                local = local.split('+')[0]
            if '.' in local:
                local = local.replace('.','')
            res.add(local+'@'+domain)
        #print(res)
        return(len(res))

        