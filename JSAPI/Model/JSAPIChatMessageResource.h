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





@protocol JSAPIChatMessageResource
@end

@interface JSAPIChatMessageResource : JSAPIObject

/* The content of the message 
 */
@property(nonatomic) NSObject* content;
/* The date the chat message was created [optional]
 */
@property(nonatomic) NSNumber* createdDate;
/* Whether the message has been edited [optional]
 */
@property(nonatomic) NSNumber* edited;
/* The id for this message [optional]
 */
@property(nonatomic) NSString* _id;
/* The type of the message set by the client 
 */
@property(nonatomic) NSString* messageType;
/* The id of the recipient: user id or topic id 
 */
@property(nonatomic) NSString* recipientId;
/* The recipient type of the message 
 */
@property(nonatomic) NSString* recipientType;
/* The id of the sender [optional]
 */
@property(nonatomic) NSNumber* senderId;
/* The id of the thread [optional]
 */
@property(nonatomic) NSString* threadId;
/* The date the chat message was updated [optional]
 */
@property(nonatomic) NSNumber* updatedDate;

+ (NSDictionary *)modalDictionary;

@end