#import <Foundation/Foundation.h>
#import "JSAPIObject.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "JSAPIBehavior.h"
#import "JSAPIProperty.h"
@protocol JSAPIBehavior;
@class JSAPIBehavior;
@protocol JSAPIProperty;
@class JSAPIProperty;



@protocol JSAPIItem
@end

@interface JSAPIItem : JSAPIObject

/* A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type, or be an extra not from the template [optional]
 */
@property(nonatomic) NSDictionary<JSAPIProperty>* additionalProperties;
/* The behaviors linked to the item, describing various options and interactions. May not be included in item lists [optional]
 */
@property(nonatomic) NSArray<JSAPIBehavior>* behaviors;
/* A category for filtering items [optional]
 */
@property(nonatomic) NSString* category;
/* The date the item was created, unix timestamp in seconds [optional]
 */
@property(nonatomic) NSNumber* createdDate;
/* The id of the item [optional]
 */
@property(nonatomic) NSNumber* _id;
/* A long description of the item [optional]
 */
@property(nonatomic) NSString* longDescription;
/* The name of the item 
 */
@property(nonatomic) NSString* name;
/* A short description of the item, max 255 chars [optional]
 */
@property(nonatomic) NSString* shortDescription;
/* A number to use in sorting items.  Default 500 [optional]
 */
@property(nonatomic) NSNumber* sort;
/* List of tags used for filtering items [optional]
 */
@property(nonatomic) NSArray<NSString*>* tags;
/* An item template this item is validated against.  May be null and no validation of additional_properties will be done.  Default = null [optional]
 */
@property(nonatomic) NSString* template;
/* The type of the item 
 */
@property(nonatomic) NSString* typeHint;
/* The unique key for the item [optional]
 */
@property(nonatomic) NSString* uniqueKey;
/* The date the item was last updated, unix timestamp in seconds [optional]
 */
@property(nonatomic) NSNumber* updatedDate;

+ (NSDictionary *)modalDictionary;

@end
