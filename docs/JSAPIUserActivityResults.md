# JSAPIUserActivityResults

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**currencyRewards** | [**NSArray&lt;JSAPIRewardCurrencyResource&gt;***](JSAPIRewardCurrencyResource.md) | Any currency rewarded to this user | [optional] 
**itemRewards** | [**NSArray&lt;JSAPIRewardItemResource&gt;***](JSAPIRewardItemResource.md) | Any items rewarded to this user | [optional] 
**rank** | **NSNumber*** | The position of the user in the leaderboard. Null means non-compete or disqualification | [optional] 
**score** | **NSNumber*** | The raw score in this leaderboard. Null means non-compete or disqualification | [optional] 
**tags** | **NSArray&lt;NSString*&gt;*** | Any tags for the metric. Each unique tag will translate into a unique leaderboard. Maximum 10 tags and 50 characters each | [optional] 
**ties** | **NSNumber*** | The number of users tied at this rank, including this user. 1 means no tie | [optional] 
**updatedDate** | **NSNumber*** | The date this score was recorded or updated. Unix timestamp in seconds | [optional] 
**user** | [**JSAPISimpleUserResource***](JSAPISimpleUserResource.md) | The player for this entry | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


