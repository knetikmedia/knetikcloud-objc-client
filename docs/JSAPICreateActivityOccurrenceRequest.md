# JSAPICreateActivityOccurrenceRequest

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**activityId** | **NSNumber*** | The id of the activity, only needed when outside of challenge/event | [optional] 
**challengeActivityId** | **NSNumber*** | The id of the challenge activity (required if playing in a challenge/event). Note that this is the challenge_activity_id in case the same activity apears twice in the challenge. | [optional] 
**coreSettings** | [**JSAPICoreActivityOccurrenceSettings***](JSAPICoreActivityOccurrenceSettings.md) | Defines core settings about the activity that affect how it can be created/played by users. | [optional] 
**entitlement** | [**JSAPIItemIdRequest***](JSAPIItemIdRequest.md) | The entitlement item required to enter the occurrence. Required if not part of an event. Must come from the set of entitlement items listed in the activity | [optional] 
**eventId** | **NSNumber*** | The id of the event this occurence is a part of, if any | [optional] 
**host** | **NSNumber*** | The host of the occurrence, if not a participant (will be left out of users array). Must be the caller that creates the occurrence unless admin. Requires activity/challenge to allow host_option of &#39;non_player&#39; if not admin as well | [optional] 
**settings** | [**NSArray&lt;JSAPISelectedSettingRequest&gt;***](JSAPISelectedSettingRequest.md) | The values selected from the available settings defined for the activity. Ex: difficulty: hard. Can be left out if the activity is played during an event and the settings are already set at the event level. Ex: every monday, difficulty: hard, number of questions: 10, category: sport. Otherwise, the set must exactly match those of the activity. | [optional] 
**simulated** | **NSNumber*** | Whether this occurrence will be ran as a simulation. Simulations will not be rewarded. Useful for bot play or trials | [optional] 
**status** | **NSString*** | The current status of the occurrence (default: SETUP). | [optional] 
**users** | [**NSArray&lt;JSAPIParticipant&gt;***](JSAPIParticipant.md) | The list of users participating in this occurrence. Can only be set directly with ACTIVITIES_ADMIN permission | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


