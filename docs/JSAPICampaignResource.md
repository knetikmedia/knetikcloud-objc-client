# JSAPICampaignResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**active** | **NSNumber*** | Whether the campaign is active or not.  Defaults to false | [optional] 
**additionalProperties** | [**NSDictionary***](JSAPIProperty.md) | A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type | [optional] 
**createdDate** | **NSNumber*** | The date/time this resource was created in seconds since unix epoch | [optional] 
**_id** | **NSNumber*** | The unique ID for that resource | [optional] 
**leaderboardStrategy** | **NSString*** | The strategy for calculating the leaderboard. Defaults to highest score. Value MUST come from the list of available strategies from the Leaderboard Service | [optional] 
**longDescription** | **NSString*** | The user friendly name of that resource. Defaults to blank string | [optional] 
**name** | **NSString*** | The user friendly name of that resource | 
**nextChallenge** | **NSString*** | The name of the next challenge coming up | [optional] 
**nextChallengeDate** | **NSNumber*** | The date/time of the next challenge coming up | [optional] 
**rewardSet** | [**JSAPIRewardSetResource***](JSAPIRewardSetResource.md) | The rewards to give at the end of the campaign. When creating/updating only id is used. Reward set must be pre-existing | [optional] 
**rewardStatus** | **NSString*** | Indicate if the rewards have been given out already | [optional] 
**shortDescription** | **NSString*** | The user friendly name of that resource. Defaults to blank string | [optional] 
**template** | **NSString*** | A campaign template this campaign is validated against (private). May be null and no validation of additional_properties will be done | [optional] 
**updatedDate** | **NSNumber*** | The date/time this resource was last updated in seconds since unix epoch | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


