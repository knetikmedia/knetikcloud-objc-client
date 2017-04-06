#import <Foundation/Foundation.h>

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


/**
 * A key for deserialization ErrorDomain
 */
extern NSString *const JSAPIDeserializationErrorDomainKey;

/**
 * Code for deserialization type mismatch error
 */
extern NSInteger const JSAPITypeMismatchErrorCode;

/**
 * Code for deserialization empty value error
 */
extern NSInteger const JSAPIEmptyValueOccurredErrorCode;

/**
 * Error code for unknown response
 */
extern NSInteger const JSAPIUnknownResponseObjectErrorCode;

@protocol JSAPIResponseDeserializer <NSObject>

/**
 * Deserializes the given data to Objective-C object.
 *
 * @param data The data will be deserialized.
 * @param className The type of objective-c object.
 * @param error The error
 */
- (id) deserialize:(id) data class:(NSString *) className error:(NSError**)error;

@end

@interface JSAPIResponseDeserializer : NSObject <JSAPIResponseDeserializer>

/**
 *  If an null value occurs in dictionary or array if set to YES whole response will be invalid else will be ignored
 *  @default NO
 */
@property (nonatomic, assign) BOOL treatNullAsError;

@end
