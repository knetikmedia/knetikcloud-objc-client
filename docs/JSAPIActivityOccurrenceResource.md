# JSAPIActivityOccurrenceResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**activityId** | **NSNumber*** | The id of the activity | 
**challengeActivityId** | **NSNumber*** | The id of the challenge activity (as part of the event, required if eventId set) | [optional] 
**createdDate** | **NSNumber*** | The date this occurrence was created, unix timestamp in seconds | [optional] 
**entitlement** | [**JSAPIActivityEntitlementResource***](JSAPIActivityEntitlementResource.md) | The entitlement item required to enter the occurrence. Required if not part of an event. Must come from the set of entitlement items listed in the activity | [optional] 
**eventId** | **NSNumber*** | The id of the event | [optional] 
**_id** | **NSNumber*** | The id of the activity occurrence | [optional] 
**rewardStatus** | **NSString*** | Indicate if the rewards have been given out already | [optional] 
**settings** | [**NSArray&lt;JSAPISelectedSettingResource&gt;***](JSAPISelectedSettingResource.md) | The list of settings and their options available for this activity. Should be null on create if and only if part of an event. Otherwise, the set must exactly match those of the activity. | [optional] 
**simulated** | **NSNumber*** | Whether this occurrence will be played as a simulation. | [optional] 
**startDate** | **NSNumber*** | The date this occurrence was started, unix timestamp in seconds. null if not yet started | [optional] 
**status** | **NSString*** | The current status of the occurrence (default: OPEN) | [optional] 
**updatedDate** | **NSNumber*** | The date this occurrence was last updated, unix timestamp in seconds | [optional] 
**users** | [**NSArray&lt;JSAPIActivityUserResource&gt;***](JSAPIActivityUserResource.md) | The list of users playing in this occurrence. Can only be set directly with ACTIVITIES_ADMIN permission | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


