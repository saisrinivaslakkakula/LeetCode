from collections import defaultdict
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:

        ### Approach 1
        # sort words; keep it as dict key. if same sorted work is found in the dict. append it to the key. Finally, return values.
        anagrams = {}

        for word in strs:
            # Sort the characters of the word to create a key
            sorted_word = ''.join(sorted(word))

            # Add the word to the corresponding anagram group
            if sorted_word in anagrams:
                anagrams[sorted_word].append(word)
            else:
                anagrams[sorted_word] = [word]

        # Convert the values (lists of anagrams) to a list of lists
        result = list(anagrams.values())


        ### Approach 2
        '''
        If 2 wors are anagrams, then their respective char counts would be equal.
        Maintain an tuple with 26 0s initially. Based on char counts, change that index. 
        for eg. abbccc
        (1,2,3,0,0,0,....)
        now in dict, tuple is key and the string is value.
        finally return dict values()

        '''
        ana_dict = defaultdict(list)
        for s in strs:
            char = [0] * 26
            for c in s:
                char[ord(c) - ord('a')] +=1
            ana_dict[tuple(char)].append(s)
        
        print(ana_dict.values())


        return ana_dict.values()