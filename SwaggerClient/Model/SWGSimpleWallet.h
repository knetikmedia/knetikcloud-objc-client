#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Knetik Platform API Documentation Latest
* No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
*
* OpenAPI spec version: Latest
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/




@protocol SWGSimpleWallet
@end

@interface SWGSimpleWallet : SWGObject

/* The current balance of the wallet [optional]
 */
@property(nonatomic) NSNumber* balance;
/* The ISO currency code for the wallet [optional]
 */
@property(nonatomic) NSString* code;
/* The name of the currency stored in the wallet [optional]
 */
@property(nonatomic) NSString* currencyName;
/* The unique ID of the wallet [optional]
 */
@property(nonatomic) NSNumber* _id;
/* The ID of the user to whom the wallet belongs [optional]
 */
@property(nonatomic) NSNumber* userId;

@end
