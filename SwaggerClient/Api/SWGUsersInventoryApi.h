#import <Foundation/Foundation.h>
#import "SWGEntitlementGrantRequest.h"
#import "SWGEntitlementItem.h"
#import "SWGInvoiceResource.h"
#import "SWGItemTemplateResource.h"
#import "SWGPageResourceEntitlementItem_.h"
#import "SWGPageResourceItemTemplateResource_.h"
#import "SWGPageResourceUserInventoryResource_.h"
#import "SWGPageResourceUserItemLogResource_.h"
#import "SWGUserInventoryAddRequest.h"
#import "SWGUserInventoryResource.h"
#import "SWGApi.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://demo.sandbox.knetikcloud.com
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGUsersInventoryApi: NSObject <SWGApi>

extern NSString* kSWGUsersInventoryApiErrorDomain;
extern NSInteger kSWGUsersInventoryApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Adds an item to the user inventory
/// The inventory is fulfilled asynchronously UNLESS the invoice is explicitely skipped. Depending on the use case, it might require the client to verify that the entitlement was added after the fact or configure a BRE rule to get a notification in real time
///
/// @param _id The id of the user
/// @param userInventoryAddRequest The user inventory add request object (optional)
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGInvoiceResource*
-(NSURLSessionTask*) addItemUsingPOST1WithId: (NSNumber*) _id
    userInventoryAddRequest: (SWGUserInventoryAddRequest*) userInventoryAddRequest
    completionHandler: (void (^)(SWGInvoiceResource* output, NSError* error)) handler;


/// Create an entitlement item
/// 
///
/// @param entitlementItem The entitlement item object (optional)
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGEntitlementItem*
-(NSURLSessionTask*) createItemUsingPOSTWithEntitlementItem: (SWGEntitlementItem*) entitlementItem
    completionHandler: (void (^)(SWGEntitlementItem* output, NSError* error)) handler;


/// Create an entitlement template
/// Entitlement templates define a type of entitlement and the properties they have
///
/// @param template The entitlement template to be created (optional)
/// 
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGItemTemplateResource*
-(NSURLSessionTask*) createTemplateUsingPOST3WithTemplate: (SWGItemTemplateResource*) template
    completionHandler: (void (^)(SWGItemTemplateResource* output, NSError* error)) handler;


/// Delete an entitlement template
/// If cascade = 'detach', it will force delete the template even if it's attached to other objects
///
/// @param _id The id of the template
/// @param cascade The value needed to delete used templates (optional)
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return 
-(NSURLSessionTask*) deleteEntitlementTemplateUsingDELETEWithId: (NSString*) _id
    cascade: (NSString*) cascade
    completionHandler: (void (^)(NSError* error)) handler;


/// Delete an entitlement item
/// 
///
/// @param entitlementId The id of the entitlement
/// 
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden"
///
/// @return 
-(NSURLSessionTask*) deleteItemUsingDELETEWithEntitlementId: (NSNumber*) entitlementId
    completionHandler: (void (^)(NSError* error)) handler;


/// Check for access to an item without consuming
/// Useful for pre-check and accounts for all various buisness rules
///
/// @param userId The id of the user to check for or &#39;me&#39; for logged in user
/// @param itemId The id of the item
/// @param sku The specific sku of an entitlement list addition to check entitlement for. This is of very limited and specific use and should generally be left out (optional)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) entitlementCheckUsingGETWithUserId: (NSString*) userId
    itemId: (NSNumber*) itemId
    sku: (NSString*) sku
    completionHandler: (void (^)(NSError* error)) handler;


/// Use an item
/// 
///
/// @param userId The id of the user to check for or &#39;me&#39; for logged in user
/// @param itemId The id of the item
/// @param sku The specific sku of an entitlement_list addition to check entitlement for. This is of very limited and specific use and should generally be left out (optional)
/// @param info Any additional info to add to the log about this use (optional)
/// 
///  code:200 message:"OK",
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) entitlementUseUsingPOSTWithUserId: (NSString*) userId
    itemId: (NSNumber*) itemId
    sku: (NSString*) sku
    info: (NSString*) info
    completionHandler: (void (^)(NSError* error)) handler;


/// List and search entitlement items
/// 
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageResourceEntitlementItem_*
-(NSURLSessionTask*) getCurrenciesUsingGET1WithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageResourceEntitlementItem_* output, NSError* error)) handler;


/// Get a single entitlement template
/// 
///
/// @param _id The id of the template
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGItemTemplateResource*
-(NSURLSessionTask*) getEntitlementTemplateUsingGETWithId: (NSString*) _id
    completionHandler: (void (^)(SWGItemTemplateResource* output, NSError* error)) handler;


/// List and search entitlement templates
/// 
///
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageResourceItemTemplateResource_*
-(NSURLSessionTask*) getEntitlementTemplatesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageResourceItemTemplateResource_* output, NSError* error)) handler;


/// List the user inventory entries for all users
/// 
///
/// @param inactive If true, accepts inactive user inventories (optional) (default to false)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param filterItemName Filter by items whose name starts with a string (optional)
/// @param filterUsername Filter by entries owned by the user with the specified username (optional)
/// @param filterGroup Filter by entries owned by the users in a given group, by unique name (optional)
/// @param filterDate A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds. Can be repeated for a range, eg: GT,123,LT,456  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageResourceUserInventoryResource_*
-(NSURLSessionTask*) getInventoryListUsingGETWithInactive: (NSNumber*) inactive
    size: (NSNumber*) size
    page: (NSNumber*) page
    filterItemName: (NSString*) filterItemName
    filterUsername: (NSString*) filterUsername
    filterGroup: (NSString*) filterGroup
    filterDate: (NSString*) filterDate
    completionHandler: (void (^)(SWGPageResourceUserInventoryResource_* output, NSError* error)) handler;


/// Get an inventory entry
/// 
///
/// @param userId The id of the inventory owner or &#39;me&#39; for the logged in user
/// @param _id The id of the user inventory
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGUserInventoryResource*
-(NSURLSessionTask*) getInventoryUsingGETWithUserId: (NSNumber*) userId
    _id: (NSNumber*) _id
    completionHandler: (void (^)(SWGUserInventoryResource* output, NSError* error)) handler;


/// Get a single entitlement item
/// 
///
/// @param entitlementId The id of the entitlement
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGEntitlementItem*
-(NSURLSessionTask*) getItemUsingGETWithEntitlementId: (NSNumber*) entitlementId
    completionHandler: (void (^)(SWGEntitlementItem* output, NSError* error)) handler;


/// List the user inventory entries for a given user
/// 
///
/// @param _id The id of the user
/// @param inactive If true, accepts inactive user inventories (optional) (default to false)
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// @param filterItemName Filter by items whose name starts with a string (optional)
/// @param filterMinDate Filter for inventory added after the specified date, unix timestamp in seconds (optional)
/// @param filterMaxDate Filter for inventory added before the specified date, unix timestamp in seconds (optional)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageResourceUserInventoryResource_*
-(NSURLSessionTask*) getUserInventoryListUsingGETWithId: (NSNumber*) _id
    inactive: (NSNumber*) inactive
    size: (NSNumber*) size
    page: (NSNumber*) page
    filterItemName: (NSString*) filterItemName
    filterMinDate: (NSNumber*) filterMinDate
    filterMaxDate: (NSNumber*) filterMaxDate
    completionHandler: (void (^)(SWGPageResourceUserInventoryResource_* output, NSError* error)) handler;


/// List the log entries for this inventory entry.
/// 
///
/// @param userId The id of the inventory owner or &#39;me&#39; for the logged in user
/// @param _id The id of the user inventory
/// @param size The number of objects returned per page (optional) (default to 25)
/// @param page The number of the page returned, starting with 1 (optional) (default to 1)
/// 
///  code:200 message:"OK",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return SWGPageResourceUserItemLogResource_*
-(NSURLSessionTask*) getUserInventoryLogUsingGETWithUserId: (NSString*) userId
    _id: (NSNumber*) _id
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(SWGPageResourceUserItemLogResource_* output, NSError* error)) handler;


/// Grant an entitlement
/// 
///
/// @param userId The id of the user to grant the entitlement to
/// @param grantRequest grantRequest
/// 
///  code:201 message:"Created",
///  code:202 message:"Accepted",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) grantEntitlementUsingPOSTWithUserId: (NSNumber*) userId
    grantRequest: (SWGEntitlementGrantRequest*) grantRequest
    completionHandler: (void (^)(NSError* error)) handler;


/// Update an entitlement item
/// 
///
/// @param entitlementId The id of the entitlement
/// @param entitlementItem The entitlement item object (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) updateItemUsingPUT1WithEntitlementId: (NSNumber*) entitlementId
    entitlementItem: (SWGEntitlementItem*) entitlementItem
    completionHandler: (void (^)(NSError* error)) handler;


/// Update an entitlement template
/// 
///
/// @param _id The id of the template
/// @param template The updated template (optional)
/// 
///  code:201 message:"Created",
///  code:204 message:"No Content",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) updateTemplateUsingPUT3WithId: (NSString*) _id
    template: (SWGItemTemplateResource*) template
    completionHandler: (void (^)(NSError* error)) handler;


/// Set the behavior data for an inventory entry
/// 
///
/// @param userId The id of the user
/// @param _id The id of the user inventory
/// @param data The data map (optional)
/// 
///  code:200 message:"OK",
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) updateUserInventoryBehaviorDataUsingPUTWithUserId: (NSNumber*) userId
    _id: (NSNumber*) _id
    data: (NSObject*) data
    completionHandler: (void (^)(NSError* error)) handler;


/// Set the expiration date
/// Will change the current grace period for a subscription but not the bill date (possibly even ending before having the chance to re-bill)
///
/// @param userId user_id
/// @param _id The id of the user inventory
/// @param timestamp The new expiration date as a unix timestamp in seconds. May be null (no body). (optional)
/// 
///  code:200 message:"OK",
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) updateUserInventoryExpiresUsingPUTWithUserId: (NSNumber*) userId
    _id: (NSNumber*) _id
    timestamp: (NSNumber*) timestamp
    completionHandler: (void (^)(NSError* error)) handler;


/// Set the status for an inventory entry
/// 
///
/// @param userId The id of the user
/// @param _id The id of the user inventory
/// @param inventoryStatus The inventory status object (optional)
/// 
///  code:200 message:"OK",
///  code:201 message:"Created",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return 
-(NSURLSessionTask*) updateUserInventoryStatusUsingPUTWithUserId: (NSNumber*) userId
    _id: (NSNumber*) _id
    inventoryStatus: (NSString*) inventoryStatus
    completionHandler: (void (^)(NSError* error)) handler;



@end
