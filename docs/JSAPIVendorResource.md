# JSAPIVendorResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**active** | **NSNumber*** | Whether the vendor is active.  Default &#x3D; true | [optional] 
**additionalProperties** | [**NSDictionary***](JSAPIProperty.md) | A map of additional properties, keyed on the property name (private). Must match the names and types defined in the template for this user type, or be an extra not from the template | [optional] 
**createDate** | **NSNumber*** | The date the vendor was added. Unix timestamp in seconds | [optional] 
**_description** | **NSString*** | A description of the vendor | [optional] 
**_id** | **NSNumber*** | The id of the vendor | [optional] 
**imageUrl** | **NSString*** | The url of an image for the vendor | [optional] 
**manualApproval** | **NSNumber*** | Whether the vendor needs to manually approve invoices before they are paid.  A separate checkout flow is required in this case.  Default: false | [optional] 
**name** | **NSString*** | The name of the vendor | 
**primaryContactEmail** | **NSString*** | The primary email address for the vendor | [optional] 
**primaryContactName** | **NSString*** | The name of the primary contact for the vendor | [optional] 
**primaryContactPhone** | **NSString*** | The primary phone number for the vendor | [optional] 
**salesEmail** | **NSString*** | The email address for sale inquiries for the vendor | [optional] 
**supportEmail** | **NSString*** | The email address for support inquiries for the vendor | [optional] 
**template** | **NSString*** | A user template this user is validated against (private). May be null and no validation of properties will be done | [optional] 
**updateDate** | **NSNumber*** | The date the vendor was last updated. Unix timestamp in seconds | [optional] 
**url** | **NSString*** | The url for the vendor&#39;s site | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


