[%bs.raw {|require('./app.css')|}];

[@bs.module] external logo : string = "./logo.svg";

let component = ReasonReact.statelessComponent("App");

let make = (~message, _children) => {
  ...component,
  render: (_self) =>
    <div className="app">
      <div className="column">
        (ReasonReact.stringToElement("Todo"))
        <div className="card-list">
          <div className="card"> <div> (ReasonReact.stringToElement("Card1")) </div> </div>
          <div> (ReasonReact.stringToElement("Card1")) </div>
          <div> (ReasonReact.stringToElement("Card1")) </div>
          <div> (ReasonReact.stringToElement("Card2")) </div>
        </div>
      </div>
      <div className="column"> (ReasonReact.stringToElement("On Going")) </div>
      <div className="column"> (ReasonReact.stringToElement("Done")) </div>
    </div>
};