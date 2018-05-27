ReactDOMRe.renderToElementWithId(
  <ComposableMap height=10 width=10>
    <ZoomableGroup>
      <Geographies geography="./world-50m.json">
        ...(
             (geographies, projection) =>
               Array.mapi(
                 (idx, geography) =>
                   <Geography
                     key=(string_of_int(idx))
                     geography
                     projection
                   />,
                 geographies,
               )
               |> ReasonReact.array
           )
      </Geographies>
    </ZoomableGroup>
  </ComposableMap>,
  "main",
);