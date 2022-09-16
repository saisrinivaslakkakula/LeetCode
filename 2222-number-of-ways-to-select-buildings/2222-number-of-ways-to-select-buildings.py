class Solution:
    def numberOfWays(self, s: str) -> int:
        # Initialize a dict to keep track of counts
        counts = defaultdict(int)

        # Iterate through all characters
        for c in s:

            # If the current digit is 1, update the counts of all sequence that such digit can contribute to
            if c == "1":
                counts["1"], counts["01"], counts["101"] = (
                    counts["1"] + 1,
                    counts["01"] + counts["0"],
                    counts["101"] + counts["10"],
                )

            # Else if the current digit is 0, update the counts of all sequence that such digit can contribute to
            else:
                counts["0"], counts["10"], counts["010"] = (
                    counts["0"] + 1,
                    counts["10"] + counts["1"],
                    counts["010"] + counts["01"],
                )

        # Return the counts of sequence that we are looking for
        return counts["101"] + counts["010"]
        