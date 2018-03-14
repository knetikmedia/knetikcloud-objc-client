# JSAPIChallengeResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**activities** | **NSNumber*** | The number of activities allowed to this challenge | [optional] 
**additionalProperties** | [**NSDictionary***](JSAPIProperty.md) | A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type | [optional] 
**campaignId** | **NSNumber*** | The id of the campaign this challenge is a part of. The challenge must be tied to an active campaign before it will spawn events | [optional] 
**varCopyOf** | **NSNumber*** | The ID of the original challenge it was copied from | [optional] 
**createdDate** | **NSNumber*** | The date/time this resource was created in seconds since unix epoch | [optional] 
**endDate** | **NSNumber*** | The end date of this challenge in seconds since epoch. required if part of a campaign | [optional] 
**_id** | **NSNumber*** | The unique ID for that resource | [optional] 
**leaderboardStrategy** | **NSString*** | The strategy for calculating the leaderboard. Defaults to highest score. Value MUST come from the list of available strategies from the Leaderboard Service. | [optional] 
**longDescription** | **NSString*** | The user friendly name of that resource. Defaults to blank string | [optional] 
**name** | **NSString*** | The user friendly name of that resource | 
**nextEventDate** | **NSNumber*** | The next date this challenge will be occur in seconds since epoch | [optional] 
**rewardLagMinutes** | **NSNumber*** | The number of minutes minimum to wait at the end of this challenge before running rewards, to allow activities to complete | [optional] 
**rewardSet** | [**JSAPIRewardSetResource***](JSAPIRewardSetResource.md) | The rewards to give at the end of the challenge. When creating/updating only id is used. Reward set must be pre-existing | [optional] 
**schedule** | [**JSAPISchedule***](JSAPISchedule.md) | The repeat schedule for the challenge | [optional] 
**shortDescription** | **NSString*** | The user friendly name of that resource. Defaults to blank string | [optional] 
**startDate** | **NSNumber*** | The start date of this challenge in seconds since epoch. required if part of a campaign | [optional] 
**template** | **NSString*** | A challenge template this challenge is validated against (private). May be null and no validation of additional_properties will be done | [optional] 
**updatedDate** | **NSNumber*** | The date/time this resource was last updated in seconds since unix epoch | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


