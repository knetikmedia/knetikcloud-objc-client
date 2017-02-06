# SWGUserActivityResultsResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**currencyRewards** | [**NSArray&lt;SWGRewardCurrencyResource&gt;***](SWGRewardCurrencyResource.md) | Any currency rewarded to this user | [optional] 
**itemRewards** | [**NSArray&lt;SWGRewardItemResource&gt;***](SWGRewardItemResource.md) | Any items rewarded to this user | [optional] 
**rank** | **NSNumber*** | The position of the user in the leaderboard. Null means non-compete or disqualification | [optional] 
**score** | **NSNumber*** | The raw score in this leaderboard. Null means non-compete or disqualification | [optional] 
**tags** | **NSArray&lt;NSString*&gt;*** | Any tags for the metric. Each unique tag will translate into a unique leaderboard. Maximum 5 tags and 50 characters each | [optional] 
**ties** | **NSNumber*** | The number of users tied at this rank, including this user. 1 means no tie | [optional] 
**user** | [**SWGSimpleUserResource***](SWGSimpleUserResource.md) | The player for this entry | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


