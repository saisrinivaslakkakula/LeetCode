class Solution:
    def reorderLogFiles(self, logs: List[str]) -> List[str]:
        let_logs = collections.defaultdict(list)
        dig_logs = {}
        let_logs_a = []
        dig_logs_a = []
        temp = []
        for log in logs:
            split = log.split(" ")
            key = split[0]
            val = split[1:]
            val_joined = " ".join(split[1:])
            if all([item.isdigit() for item in val]):
                dig_logs_a.append(log)
            else:
                temp.append((key,val_joined))
        temp.sort(key = lambda x:x[1])
        for t in temp:
            let_logs[t[1]].append(t[0])
        for k,v in let_logs.items():
            if len(v) >1:
                v.sort()
                for v1 in v:
                    let_logs_a.append(v1+" "+k)
            else:
                let_logs_a.append(v[0]+" "+k)
        res = let_logs_a +dig_logs_a 
        return res