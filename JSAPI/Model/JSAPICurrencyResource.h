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





@protocol JSAPICurrencyResource
@end

@interface JSAPICurrencyResource : JSAPIObject

/* Whether the currency is active. Default true [optional]
 */
@property(nonatomic) NSNumber* active;
/* The unique id code for the currency. Maximum 5 characters 
 */
@property(nonatomic) NSString* code;
/* The unix timestamp in seconds the currency was added to the system [optional]
 */
@property(nonatomic) NSNumber* createdDate;
/* Whether this is the default currency. All real money wallets will be in this currency, and the 'factor' on each currency is in relation to the default. There must be one default currency and the current will be changed if you set another as the default. Cannot be combined with virtual currency. Take extreme caution when changing [optional]
 */
@property(nonatomic) NSNumber* defaultCurrency;
/* The decimal to multiply the default currency to localize to this one. Should be 1 for the default currency itself. 
 */
@property(nonatomic) NSNumber* factor;
/* The url for an icon of the currency [optional]
 */
@property(nonatomic) NSString* icon;
/* The name of the currency 
 */
@property(nonatomic) NSString* name;
/* The type of currency. Default 'real' [optional]
 */
@property(nonatomic) NSString* type;
/* The unix timestamp in seconds the currency was last updated in the system. [optional]
 */
@property(nonatomic) NSNumber* updatedDate;

+ (NSDictionary *)modalDictionary;

@end
