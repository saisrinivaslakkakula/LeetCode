class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        unique = set()
        for email in emails:
            local,domain = email.split('@')
            if '+' in local:
                local = local.split('+')[0]
            if '.' in local:
                local = ''.join(local.split('.'))
            final_email = local + "@" + domain
            unique.add(final_email)
        return(len(unique))
        