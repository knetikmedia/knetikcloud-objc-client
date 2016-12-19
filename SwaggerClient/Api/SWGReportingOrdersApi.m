#import "SWGReportingOrdersApi.h"
#import "SWGQueryParamCollection.h"
#import "SWGPageAggregateInvoiceReportResource_.h"


@interface SWGReportingOrdersApi ()

@property (nonatomic, strong) NSMutableDictionary *defaultHeaders;

@end

@implementation SWGReportingOrdersApi

NSString* kSWGReportingOrdersApiErrorDomain = @"SWGReportingOrdersApiErrorDomain";
NSInteger kSWGReportingOrdersApiMissingParamErrorCode = 234513;

@synthesize apiClient = _apiClient;

#pragma mark - Initialize methods

- (instancetype) init {
    self = [super init];
    if (self) {
        SWGConfiguration *config = [SWGConfiguration sharedConfig];
        if (config.apiClient == nil) {
            config.apiClient = [[SWGApiClient alloc] init];
        }
        _apiClient = config.apiClient;
        _defaultHeaders = [NSMutableDictionary dictionary];
    }
    return self;
}

- (id) initWithApiClient:(SWGApiClient *)apiClient {
    self = [super init];
    if (self) {
        _apiClient = apiClient;
        _defaultHeaders = [NSMutableDictionary dictionary];
    }
    return self;
}

#pragma mark -

+ (instancetype)sharedAPI {
    static SWGReportingOrdersApi *sharedAPI;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        sharedAPI = [[self alloc] init];
    });
    return sharedAPI;
}

-(NSString*) defaultHeaderForKey:(NSString*)key {
    return self.defaultHeaders[key];
}

-(void) addHeader:(NSString*)value forKey:(NSString*)key {
    [self setDefaultHeaderValue:value forKey:key];
}

-(void) setDefaultHeaderValue:(NSString*) value forKey:(NSString*)key {
    [self.defaultHeaders setValue:value forKey:key];
}

-(NSUInteger) requestQueueSize {
    return [SWGApiClient requestQueueSize];
}

#pragma mark - Api Methods

///
/// Retrieve invoice counts aggregated by time ranges
/// 
///  @param currencyCode The code for a currency to get sales data for 
///
///  @param granularity The time duration to aggregate by (optional, default to day)
///
///  @param filterPaymentStatus A payment status to filter results by, can be a comma separated list (optional)
///
///  @param filterFulfillmentStatus An invoice fulfillment status to filter results by, can be a comma separated list (optional)
///
///  @param startDate The start of the time range to return, unix timestamp in seconds. Default is beginning of time (optional)
///
///  @param endDate The end of the time range to return, unix timestamp in seconds. Default is end of time (optional)
///
///  @returns SWGPageAggregateInvoiceReportResource_*
///
-(NSNumber*) getDailyInvoicesUsingGETWithCurrencyCode: (NSString*) currencyCode
    granularity: (NSString*) granularity
    filterPaymentStatus: (NSString*) filterPaymentStatus
    filterFulfillmentStatus: (NSString*) filterFulfillmentStatus
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    completionHandler: (void (^)(SWGPageAggregateInvoiceReportResource_* output, NSError* error)) handler {
    // verify the required parameter 'currencyCode' is set
    if (currencyCode == nil) {
        NSParameterAssert(currencyCode);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"currencyCode"] };
            NSError* error = [NSError errorWithDomain:kSWGReportingOrdersApiErrorDomain code:kSWGReportingOrdersApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/reporting/orders/count/{currency_code}"];

    // remove format in URL if needed
    [resourcePath replaceOccurrencesOfString:@".{format}" withString:@".json" options:0 range:NSMakeRange(0,resourcePath.length)];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (currencyCode != nil) {
        pathParams[@"currency_code"] = currencyCode;
    }

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (granularity != nil) {
        queryParams[@"granularity"] = granularity;
    }
    if (filterPaymentStatus != nil) {
        queryParams[@"filter_payment_status"] = filterPaymentStatus;
    }
    if (filterFulfillmentStatus != nil) {
        queryParams[@"filter_fulfillment_status"] = filterFulfillmentStatus;
    }
    if (startDate != nil) {
        queryParams[@"start_date"] = startDate;
    }
    if (endDate != nil) {
        queryParams[@"end_date"] = endDate;
    }
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.apiClient.configuration.defaultHeaders];
    [headerParams addEntriesFromDictionary:self.defaultHeaders];
    // HTTP header `Accept`
    NSString *acceptHeader = [self.apiClient.sanitizer selectHeaderAccept:@[@"*/*"]];
    if(acceptHeader.length > 0) {
        headerParams[@"Accept"] = acceptHeader;
    }

    // response content type
    NSString *responseContentType = [[acceptHeader componentsSeparatedByString:@", "] firstObject] ?: @"";

    // request content type
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[@"OAuth2"];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"GET"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"SWGPageAggregateInvoiceReportResource_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((SWGPageAggregateInvoiceReportResource_*)data, error);
                                }
                           }
          ];
}



@end
