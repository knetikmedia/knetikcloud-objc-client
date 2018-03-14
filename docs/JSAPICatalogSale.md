# JSAPICatalogSale

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**currencyCode** | **NSString*** | The iso3 code for the currency for this discountValue.  The sku purchased will have to match for it this sale to apply | 
**discountType** | **NSString*** | The way in which the price is reduced. &#39;value&#39; means subtracting directly, &#39;percentage&#39; means subtracting by the price times the discountValue (1.0 &#x3D;&#x3D; 100%) | 
**discountValue** | **NSNumber*** | The amount deducted from the price, in the same currencyCode as the item | [optional] 
**_id** | **NSNumber*** | The id of the sale | [optional] 
**item** | **NSNumber*** | The id of the item this sale applies to.  Leave null to use other filters | [optional] 
**longDescription** | **NSString*** | The long description of the sale | [optional] 
**name** | **NSString*** | The name of the sale.  Max 40 characters | 
**saleEndDate** | **NSNumber*** | The date the sale ends, null for never.  Unix timestamp in seconds | [optional] 
**saleStartDate** | **NSNumber*** | The date the sale begins.  Unix timestamp in seconds | 
**shortDescription** | **NSString*** | The short description of the sale.  Max 140 characters | [optional] 
**tag** | **NSString*** | The tag this sale applies to.  Leave null to skip this filter (applies to all tags) | [optional] 
**vendor** | **NSNumber*** | The id of the vendor this sale applies to.  Leave null to skip this filter (applies to all vendors) | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


