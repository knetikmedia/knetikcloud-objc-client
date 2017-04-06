# JSAPICommentResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**content** | **NSString*** | The comment content of that resource | 
**context** | **NSString*** | The type of object this comment applies to (ex: video, article, etc). Required when passed to /comments | [optional] 
**contextId** | **NSNumber*** | The id of the object this comment applies to.  Required when passed to /comments | [optional] 
**createdDate** | **NSNumber*** | The date/time this resource was created in seconds since epoch | [optional] 
**_id** | **NSNumber*** | The unique ID for that resource | [optional] 
**summary** | **NSString*** | The summary of that resource | [optional] 
**updatedDate** | **NSNumber*** | The date/time this resource was last updated in seconds since epoch | [optional] 
**user** | [**JSAPISimpleUserResource***](JSAPISimpleUserResource.md) | The user who created the comment | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


