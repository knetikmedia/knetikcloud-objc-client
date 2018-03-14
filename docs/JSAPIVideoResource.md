# JSAPIVideoResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**active** | **NSNumber*** | Whether the video is available, based on various factors | [optional] 
**additionalProperties** | [**NSDictionary***](JSAPIProperty.md) | A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type | [optional] 
**author** | [**JSAPISimpleReferenceResourceLong_***](JSAPISimpleReferenceResourceLong_.md) | The original artist of the media | [optional] 
**authored** | **NSNumber*** | The date the media was created as a unix timestamp in seconds | [optional] 
**banned** | **NSNumber*** | Whether the video has been banned or not | [optional] 
**category** | [**JSAPISimpleReferenceResourceString_***](JSAPISimpleReferenceResourceString_.md) | The category of the video | 
**comments** | [**NSArray&lt;JSAPICommentResource&gt;***](JSAPICommentResource.md) | The comments of the video | [optional] 
**contributors** | [**NSArray&lt;JSAPIContributionResource&gt;***](JSAPIContributionResource.md) | Artists that contributed to the creation. See separate endpoint to add to list | [optional] 
**createdDate** | **NSNumber*** | The date/time this resource was created in seconds since unix epoch | [optional] 
**embed** | **NSString*** | The country of an embedable version | [optional] 
**extension** | **NSString*** | The file extension of the media file. 1-5 characters | 
**height** | **NSNumber*** | The height of the video in px | 
**_id** | **NSNumber*** | The unique ID for that resource | [optional] 
**length** | **NSNumber*** | The length of the video in seconds | 
**location** | **NSString*** | The country of the media. Typically a url. Cannot be blank | 
**longDescription** | **NSString*** | The user friendly name of that resource. Defaults to blank string | [optional] 
**mimeType** | **NSString*** | The mime-type of the media | [optional] 
**name** | **NSString*** | The user friendly name of that resource | 
**priority** | **NSNumber*** | The sort order of the video. default: 100 | [optional] 
**privacy** | **NSString*** | The privacy setting. default: private | [optional] 
**published** | **NSNumber*** | Whether the video has been made public. Default true | [optional] 
**shortDescription** | **NSString*** | The user friendly name of that resource. Defaults to blank string | [optional] 
**size** | **NSNumber*** | The size of the media. Minimum 0 if supplied | [optional] 
**tags** | **NSArray&lt;NSString*&gt;*** | The tags for the video | [optional] 
**template** | **NSString*** | A video template this video is validated against (private). May be null and no validation of additional_properties will be done | [optional] 
**thumbnail** | **NSString*** | The country of a thumbnail version. Typically a url | [optional] 
**updatedDate** | **NSNumber*** | The date/time this resource was last updated in seconds since unix epoch | [optional] 
**uploader** | [**JSAPISimpleUserResource***](JSAPISimpleUserResource.md) | The user the media was uploaded by. May be null for system uploaded media. May only be set to a user other than the current caller if VIDEOS_ADMIN permission. Null will mean the caller is the uploader unless the caller has VIDEOS_ADMIN permission, in which case it will be set to null | [optional] 
**views** | **NSNumber*** | The view count of the video | [optional] 
**width** | **NSNumber*** | The width of the video in px | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


