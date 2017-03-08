#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "SWGSimpleUserResource.h"


@protocol SWGWalletTransactionResource
@end

@interface SWGWalletTransactionResource : SWGObject

/* The new balance of the wallet after the transaction [optional]
 */
@property(nonatomic) NSNumber* balance;
/* The unix timestamp in seconds of the transaction [optional]
 */
@property(nonatomic) NSNumber* createDate;
/* The code of the currency for the transaction [optional]
 */
@property(nonatomic) NSString* currencyCode;
/* The specific details of the transaction, such as a message from the admin that created it [optional]
 */
@property(nonatomic) NSString* details;
/* The id of the transaction [optional]
 */
@property(nonatomic) NSNumber* _id;
/* The id of the invoice that spawned the transaction, if any [optional]
 */
@property(nonatomic) NSNumber* invoiceId;
/* Whether the transaction has been refunded [optional]
 */
@property(nonatomic) NSNumber* isRefunded;
/* The response [optional]
 */
@property(nonatomic) NSString* response;
/* The root source of the transaction [optional]
 */
@property(nonatomic) NSString* source;
/* If the transaction was successful [optional]
 */
@property(nonatomic) NSNumber* successful;
/* The payment gateway (external) transaction ID [optional]
 */
@property(nonatomic) NSString* transactionId;
/* The general type of the transaction [optional]
 */
@property(nonatomic) NSString* type;
/* The table name of the subclass [optional]
 */
@property(nonatomic) NSString* typeHint;
/* The owner of the wallet [optional]
 */
@property(nonatomic) SWGSimpleUserResource* user;
/* The amount of the transaction, positive if a gain, negative if an expenditure [optional]
 */
@property(nonatomic) NSNumber* value;
/* The id of the wallet this transaction affected [optional]
 */
@property(nonatomic) NSNumber* walletId;

@end
